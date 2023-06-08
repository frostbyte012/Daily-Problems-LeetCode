#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int binary(vector<vector<int>>& grid,int row,int si, int ei){
        
        if(si>ei)    //edge condition for checking if the starting index doesn't exceed the ending index
            return 0;
        
        int mid=ei-(ei-si)/2; // finding the mid element;
        
        if(grid[row][mid]<0)  // checking if the mid element is smalller negative if smaller than 0
            return (ei-mid+1)+binary(grid,row,si,mid-1); // if so then we first add the number of elements that is on the right side since it is sorted and is having all negative elements by using the formula [end index - mid + 1] and we continue the binary search hunt for the left side
        
        return binary(grid,row,mid+1,ei); // if not the element must be positive so we continue the binary search hunt in the right side
        
    }
    
    int countNegatives(vector<vector<int>>& grid) {
    
        int count=0; // the counter for checking the number of negative elements
        
        for(int i=0;i<grid.size();i++)
        {
            count+=binary(grid,i,0,grid[i].size()-1); // we count the negative elements calling the binary func for each row of the grid
        }
        
        return count; // finally returning the count
    }
};