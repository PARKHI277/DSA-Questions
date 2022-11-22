#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// recursion
int solve(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int min_count = INT_MAX;
    for (int num = 1; num <= sqrt(n);num++)
    {
        int sqNum = num * num;
        int currCount = 1 + solve(n - sqNum);
        min_count = min(min_count, currCount);
    }

    return min_count;
}
int main()
{
    int n;
    cin >> n;
    
    int c = solve(n);
    cout << c << endl;
    return 0;
}