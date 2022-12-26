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
    int diameter(Node* root) {
       int dia=0;
       height(root,dia);
       return dia;
       
   }
   int height(Node* root,int &d)
   {
       if(!root)return 0;
       int lh=height(root->left,d);
       int rh=height(root->right,d);
       d=max(d,lh+rh);
       return 1+max(lh,rh);
       
    }