#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        for(auto c : nums)
        {
            mp[c]++;
        }
        
        for(auto it : mp)
        {
            if(it.second>nums.size()/2)
               return it.first;
        }
        
        return -1;
        
    }
};