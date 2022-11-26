#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

 long long findMinSum(vector<int> &A,vector<int> &B,int N)
    {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long res;
        for(int i  =0;i<N;i++)
        {
            res = res + abs(A[i] - B[i]);
        }
        return res;
    }