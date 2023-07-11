/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parentMap;
        buildParentMap(root, parentMap);

        //find nodes at distance k
        vector<int> result;
        unordered_map<TreeNode *, bool> visited;

        
        findNodesAtKDistance(target, k, parentMap, result, visited);
        return result;
    }

    void findNodesAtKDistance(TreeNode *node, int k, unordered_map<TreeNode *, TreeNode *> &parentMap, vector<int> &result, unordered_map<TreeNode *, bool> &visited)
    {
        if(node == NULL || k<0 || visited[node])
            return;

        visited[node] = true;

        if(k == 0)
        {
            result.push_back(node->val);
            return;
        }
        
        findNodesAtKDistance(node->left, k-1, parentMap, result, visited);
        findNodesAtKDistance(node->right, k-1, parentMap, result, visited);
        findNodesAtKDistance(parentMap[node], k-1, parentMap, result, visited);
    }

    void buildParentMap(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parentMap)
    {
        if(root == NULL)
            return;
        
        if(root->left)
            parentMap[root->left] = root;
        if(root->right)
            parentMap[root->right] = root;

        buildParentMap(root->left, parentMap);
        buildParentMap(root->right, parentMap);
    
    }
};