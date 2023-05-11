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
    
    void postorder(TreeNode*curr,vector<int>&v)
    {
        if(curr == NULL)
        {
            return;
        }
        postorder(curr->left,v);
        postorder(curr->right,v);
        v.push_back(curr->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        postorder(root,v);
        return v;
    }
};