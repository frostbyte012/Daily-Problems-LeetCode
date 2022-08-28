#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
     int r=mat.size();
     int c=mat[0].size();
     int rowIndex=0;
     int colIndex;
     int numberOfDiagonal=c+r-1;
        
     for(int i=1;i<=numberOfDiagonal;i++)
     {
         vector<int> diagonal;
         
         if(i<=c)
         {
             colIndex=c-i;
         }
         
         else{
             colIndex=0;
             rowIndex++;
         }
         
         for(int k=rowIndex,l=colIndex;k<r&&l<c;k++,l++)
         {
             diagonal.push_back(mat[k][l]);
         }
         
         sort(diagonal.begin(),diagonal.end());
         
         for(int k=rowIndex,l=colIndex,n=0;k<r&&l<c&&n<diagonal.size();n++,k++,l++)
         {
             mat[k][l]=diagonal[n];
         }
         
     }
        
     return mat;
    
    }
};  