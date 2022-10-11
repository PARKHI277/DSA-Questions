#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;


void   consecutive(int k ,char str[],int n)
{
    if(n == k)
    {
        str[n] = '\0';
        cout << str << " ";
        return;
    }

    if(str[n-1] == '1')
    {
        str[n] = '0';
        consecutive(k, str, n + 1);
        

    }

    if (str[n-1] == '0')
    {
        str[n] = '0';
          consecutive(k, str, n+1);
        str[n] = '1';
          consecutive(k, str, n+1) ;
    }
}
void generateString(int K)
{
    // base condition
    if(K<=0)
    {
        return;
    }
    char str[K];

    str[0] = '0';
    consecutive(K, str, 1);

      str[0] = '1' ;
   consecutive( K , str , 1 );
}
int main()
{
    int n = 3;
    generateString(n);
    return 0;
}
