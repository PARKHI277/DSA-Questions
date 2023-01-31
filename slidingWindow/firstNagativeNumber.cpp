#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) 
{
        int i = 0,j = 0;
        queue<int>q;   
        vector<long long int>ans;
        
        while(j<N){
            
            if(A[j]<0){
               q.push(A[j]); 
            }
            
            if(j-i+1<K)
            {
                j++;
            }
            else if(j-i+1 == K){
                
                if(q.empty())
                {
                    ans.push_back(0);
                }
                else{
                   int data = q.front();
                    ans.push_back(data);
                    
                   if(data == A[i])
                   {
                       q.pop();
                   }
                }
                 i++;
                 j++;
            }
        }
        
        return ans;          
 }