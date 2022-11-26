#include <bits/stdc++.h>
using namespace std;
 
 // using binary search
 int first(int arr[],int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;
          
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
         else
        {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}

int second(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) 
    {
         int mid = (low + high) / 2;
          
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
       else 
        {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v;
    int f  = first(arr,x,n);
    v.push_back(f);
    int s  = second(arr,x,n);
    v.push_back(s);
    
    return v;
    
}