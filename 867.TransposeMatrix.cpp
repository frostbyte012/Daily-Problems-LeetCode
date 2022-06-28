#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int x=matrix.size(),y=matrix[0].size();
    
        vector<vector<int>> transpose (y,vector<int> (x));
        
        for(int i=0;i<x;i++)
        {
    
            for(int j=0;j<y;j++)
            {
                 transpose[j][i]=matrix[i][j];
            }
        }
        
        return transpose;
    }
};