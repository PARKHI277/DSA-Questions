#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;


void solve(int index,vector<int>&ds,int s,int Sum,int arr[] ,int n)
{
    // base condition
    if(index == n)
    {
    if(s == Sum)
    {
        for(auto it:ds)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return;
    }

    ds.push_back(arr[index]);
    s = s + arr[index];

    // include
    solve(index+1, ds, s, Sum,arr, n);

    s = s - arr[index];
    ds.pop_back();

    // exclude
    solve(index+1, ds, s, Sum,arr, n);
}

int main()
{
    int arr[] = {1, 2, 3};
    int sum = 2;
    int n = 3;
    vector<int> ds;
    solve(0, ds, 0, sum,arr, n);
    return;
}