#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       
        map<int,string>mp; //map for storing the arrays in the order as per their height as keys
        
        for(int i=0;i<names.size();i++) // storing the height keyed names in the map
        {
            mp[heights[i]]=names[i];
        }
        
        sort(heights.begin(),heights.end()); // sorting the heights in ascending order
        
        vector<string>ans; // vector for retunring and storing the ordered names in ascending
        
        for(int i=heights.size()-1;i>=0;i--) // storing the descending ordered names from the map into the ans vector
        {
            ans.push_back(mp[heights[i]]);
        }
        
        
        return ans; // return the ans
    }
};