  #include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector> 
#include<queue>
#include<cmath>
using namespace std;
struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;


struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL){
   return NULL;
   }
   node*next=NULL;
   node*curr=head;
   node*prev=NULL;
   int count=0;
   while(curr!=NULL && count <k){
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
       count++;
   }
   if(next!=NULL){
       head->next=reverse(next,k);
   }
   return prev;
    }