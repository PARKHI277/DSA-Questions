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

// using recursion

 int height(struct Node* node){
        // code here 
        if(node == NULL)
        {
            return 0;
        }
        int lh = height(node->left);
        int rh = height(node->right);
        
        return 1 + max(lh,rh);
    }

// using level order traversal

 int height(struct Node* node){
     int depth = 0;
     if(node == NULL)
     {
         return 0;

     }
     else
     {
         queue<Node *> q;
         q.push(node);
         while(!q.empty())
         {
             int size = q.size();
             depth++;
             for (int i = 0; i < size;i++)
             {
                 Node *temp = q.front();
                 q.pop();
                 if(temp->left != NULL)
                 {
                     q.push(temp->left);
                 }
                 if(temp->right != NULL)
                 {
                     q.push(temp->right);
                 }
             }
         }

         return depth;
     }
    }