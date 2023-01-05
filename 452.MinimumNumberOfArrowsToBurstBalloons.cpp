#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int>&a,vector<int>&b) // boolean function that checks if the 1d arrays 2nd element is smaller or not
    {
        return a[1]<b[1];
    }

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
    
        if(points.size()==0) //checking the edge condition
           return 0;
        
        sort(points.begin(),points.end(),comp); // sorting taking the second digit as the consideration 
        
        int arrows=1; // assuming the min number of arrows to be one atleat
        
        int lastelement=points[0][1]; // taking the last element of the first ballon as the starting reference
        
        for(int i=1;i<points.size();i++) // iterating the ballons 
        {
            if(points[i][0]>lastelement) // if the last elment is < the first index of the next ballon that means we need another arrow and updating the last element as the last element of the current ballon
            {
                arrows++; // increasing the arrow number
                 
                lastelement=points[i][1]; // last element of the current ballon is taken now
            }
            
        }
        
        return arrows; // returning the arrow number
    }
};