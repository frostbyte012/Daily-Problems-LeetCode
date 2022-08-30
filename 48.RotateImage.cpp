#include<bits/stdc++.h>
using namespace std;

// Using more space :-

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> mat=matrix;

        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][n-1-i]=mat[i][j]; // Format for the rotation of the image will be : matrix[j][n-1-i]=matrix_copy[i][j] 
            }
        }
        
        
    }
};



/*
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m=matrix.size();

        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<m;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
*/