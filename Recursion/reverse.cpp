#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<stack>

  void insertAtBottom(stack<int>&s,int&x)
    {
        if(s.empty())
        {
            s.push(x);
            return;
        }
        int num = s.top();
        s.pop();
        insertAtBottom(s,x);
        s.push(num);
    }
    
    void solve(stack<int>&St)
    {
        if(St.empty())
        {
            return;
        }
        int x = St.top();
        St.pop();
        solve(St);
        insertAtBottom(St,x);
        
    }
    stack<int> Reverse(stack<int> St){
        
     solve(St);
     return St;
    }