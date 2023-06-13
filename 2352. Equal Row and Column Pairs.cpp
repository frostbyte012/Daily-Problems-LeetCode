#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        
        int n=grid.size(),ans=0; // storing the grid col and row size since n x m = n x n
        
        vector<int>store; //  a serial vector for helping us store the elements in column wise order
        
        vector<vector<int>>grid_col; // a similar 2D vector to store the elements in columnise order
        
        for(int i=0;i<n;i++) // traversing the entire 2D array and storing the elements in column wise manner 
        {
            for(int j=0;j<n;j++)
            {
                store.push_back(grid[j][i]); // storing the elements in store helper vector in columwise manner by this order rows become column ans coulmns become rows i.e we store them in transpose order
            }
            
            grid_col.push_back(store); // finally storing the store elements in grid_col vector
            
            store={}; // clearing the store vector to be ready to store the next fresh element
            
        }
        
        for(int i=0;i<n;i++) //traversing and making the count of similar rows and columns in the grid and grid_col vectors
        {
            
            for(int j=0;j<n;j++)
            {
               if(grid_col[i]==grid[j])
                   ans++; // if they are similar increment ans variable by 1
            }
            
            
        }
        
        return ans; // finally returning the ans variable
        
    }
};