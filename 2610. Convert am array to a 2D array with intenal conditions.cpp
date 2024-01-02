#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
   static bool cmp(pair<int,int>&a,pair<int,int>&b) //comparator function for sorting the individual elements of the map
    {
        return a.second > b.second; //checking the elements second element to sort based on frequency
    }
    
    vector<vector<int>>findMatrix(vector<int>& nums) {
        
        map<int,int>mp; // map for counting the element frequency of the nums array
        
        vector<pair<int,int>>v; // vector for storing the sorted order elements of the map
        
        for(auto x : nums) //storing the elements into the map
        {
            mp[x]++;
        }
        
        for(auto x : mp) // putting the map elements into the vector before sorting 
        {
            v.push_back(x);
        }
        
        sort(v.begin(),v.end(),cmp); //sorting the vector elements
        
        
        vector<vector<int>>ans(v[0].second); //making a 2D array based on the element occuring the most in the vecotr v since it has the element with higest frequency at 0th index
        
        for(auto x : v) // storing each element into separate array based on their frequencies
        { 
            for(int j=0;j<x.second;j++) 
            {
                ans[j].push_back(x.first);
            }
        }
        
        return ans; // returning the answer
    }
};
