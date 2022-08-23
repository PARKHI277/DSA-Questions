 #include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector> 
#include<queue>
#include<cmath>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

 vector<int> rightView(Node *root)
    {
      vector <int> v;
   if(root==NULL){
       return v;
   }
   queue<Node*> q;
   int size;
   q.push(root);
   while(!q.empty()){
       size= q.size();
       for(int i=1;i<=size;i++){
       Node* curr=q.front(); q.pop();
           if(i==size){
               v.push_back(curr->data);
           }
       if(curr->left) q.push(curr->left);
       if(curr->right) q.push(curr->right);
       }
   }
    return v;
    }