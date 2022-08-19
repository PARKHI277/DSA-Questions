#include <bits/stdc++.h>
using namespace std;
 
// A Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
};
 
// Iterative method to find height of Binary Tree
void printLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // Print front of queue and remove it from queue
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}
 
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}


// // another method
// vector<int> levelOrder(Node* node)
//     {
//      vector <int> v;
//     queue<Node*> q;
//     q.push(node);
//     while(!q.empty()){
//         Node* curr=q.front(); q.pop(); v.push_back(curr->data);
//         if(curr->left) q.push(curr->left);
//         if(curr->right) q.push(curr->right);
//         }
//      return v;
//     }

// another method

// while(!q.empty())
// {
//     int size = q.size();
//     vector<int> level;
//     for (int i = 0;i<size;i++)
//     {
//         TreeNode *node = q.front();
//         q.pop();
//         if(node->left != NULL)
//         {
//             q.push(node->left);
//         }
//          if(node->right != NULL)
//         {
//             q.push(node->left);
//         }
//         level.push_back(node->val);
//     }
//     ans.push_back(level);
// }

// class node  {
// public:
//     int data;
//     node *left, *right;
// };
// void printCurrentLevel(node* root, int level);
// int height(node* node);
// node *newNode(int data);

// node* newNode(int data)
// {
//     node* Node = new node();
//     Node->data = data;
//     Node->left = NULL;
//     Node->right = NULL;
 
//     return (Node);
// }
// void printLevelOrder(node* root)
// {
//     int h = height(root);
//     int i;
//     for (i = 1; i <= h; i++)
//         printCurrentLevel(root, i);
// }
// void printCurrentLevel(node* root, int level)
// {
//     if (root == NULL)
//         return;
//     if (level == 1)
//         cout << root->data << " ";
//     else if (level > 1) {
//         printCurrentLevel(root->left, level - 1);
//         printCurrentLevel(root->right, level - 1);
//     }
// }
// int height(node* node)
// {
//     if (node == NULL)
//         return 0;
//     else {
       
//         int lheight = height(node->left);
//         int rheight = height(node->right);
 
        
//         if (lheight > rheight) {
//             return (lheight + 1);
//         }
//         else {
//             return (rheight + 1);
//         }
//     }
// }


// int main()
// {
//     node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
 
//     cout << "Level Order traversal of binary tree is \n";
//     printLevelOrder(root);
 
//     return 0;
// }