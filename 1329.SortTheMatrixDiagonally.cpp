#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
     int r=mat.size();
     int c=mat[0].size();
     int rowIndex=0; // for rows
     int colIndex; // for cols
     int numberOfDiagonal=c+r-1;
        
     for(int i=1;i<=numberOfDiagonal;i++)
     {
         vector<int> diagonal;

             /*
              All the first c diagonals have common starting rowIndex = 0 
              Only colIndex changes
            */
         
         if(i<=c)
         {
             colIndex=c-i;
         }
         
         // After that starting colIndex is constant and rowIndex changes

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


//explanation link
// https://leetcode.com/problems/sort-the-matrix-diagonally/discuss/2493747/C%2B%2B-Beautiful-Code-and-Easy-Understanding-Solution