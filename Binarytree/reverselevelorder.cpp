#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};


vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       Node* node = q.front();
       q.pop();
       ans.push_back(node->data);
       if(node->right!=NULL){
           q.push(node->right);
       }
       if(node->left!=NULL){
           q.push(node->left);
       }
   }
   reverse(ans.begin(),ans.end());
   return ans;
    
}