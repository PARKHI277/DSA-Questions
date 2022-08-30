#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(Mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                Mat[i][j] = v[(i*n+j)];
            }
        }
        return Mat;
    }