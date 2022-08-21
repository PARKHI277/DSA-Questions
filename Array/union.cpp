 #include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<queue>
#include<map>


int doUnion(int a[], int n, int b[], int m)  {
        //code here
        map<int,int>map;
        for(int i = 0;i<n;i++)
        {
            map[a[i]] = 1;
        }
        for(int i = 0;i<m;i++)
        {
            if(map[b[i]] != 0)
            {
                map[b[i]] = 1;
            }
        }
        
        return map.size();
    }