/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int matchTree  = 0;
    
    pair<int,int>calculate(TreeNode * root)
    {
        if(root == NULL)
        {
            return {0,0};
        }
        
        auto leftSubtree = calculate(root->left);
        auto rightSubtree = calculate(root->right);
        
        int sumValues = leftSubtree.first + rightSubtree.first +  root->val;
        
        int Nodes =  leftSubtree.second + rightSubtree.second + 1;
        
        if(sumValues/Nodes == root->val)
        {
            matchTree++;
        }
        
        return {sumValues,Nodes};
    }
    int averageOfSubtree(TreeNode* root) {
        calculate(root);
        return matchTree;
    }
};