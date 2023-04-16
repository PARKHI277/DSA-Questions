#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addMinimum(string word)
    {
//          int n = word.length();
//          int count = 0, i = 0;
    
//     while (i < n) 
//     {
//            // check for a
//         if (word[i] == 'a') 
//         {
           
//             if (i + 2 < n && word[i + 1] == 'b' && word[i + 2] == 'c') 
//             {
//                 i += 3;
//             } 
//             else 
//             {
//                 count += 2;
//                 i++;
//             }
//         }
        
//         else {
           
//             count += 3;
//             i++; 
//         }
//     }
        
//     return count;
        
         int count=0; 
        int l=word.length(); 
        for(int i=0;i<word.length();i++) 
        { 
            if(word[i] =='a' ) 
            { 
                if(i+1<l && word[i+1] =='b') 
                { 
                    if(i+2<l && word[i+2] =='c') 
                    { 
                        i=i+2; 
                    } 
                    else 
                    { 
                        i++; 
                        count++; 
                    } 
                } 
                else if(i+1<l && word[i+1]=='c') 
                { 
                    
                    i=i+1; 
                    count++; 
                } 
                else 
                { 
                    count+=2; 
                    
                } 
            } 
            else if(word[i]=='b') 
            { 
                if(i+1<l && word[i+1]=='c') 
                { 
                    i=i+1; 
                    count++; 
                } 
                else 
                { 
                    count+=2; 
                } 
            } 
            else 
            { 
                count+=2; 
            } 
        } 
        return count; 
        
    }
};