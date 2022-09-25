#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void f(vector<int>&v)

{

    sort(v.begin(),v.end());

}


void SortedStack :: sort()

{

    vector<int>v;

  while(!s.empty())

  {

      v.push_back(s.top());

      s.pop();

  }

     f(v);

   for(int i=0;i<v.size();i++)

   {

       s.push(v[i]);

   }
}