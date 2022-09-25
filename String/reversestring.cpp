#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s = "Let's take LeetCode contest";
    int n = s.size();
    int i = 0;
    for (int j = 0; i < n;i++)
    {
       if(s[j] == ' ')
       {
           reverse(s.begin() + i, s.end());
       }
    }
}

//  int i=0;
//         for(int j=0;j<s.length();j++)
//         {
//             if(s[j]==' ')
//             {
//                 reverse(s.begin()+i,s.begin()+j);
//                 i=j+1;
//             }
//         }
//         reverse(s.begin()+i,s.end());
//         return s;