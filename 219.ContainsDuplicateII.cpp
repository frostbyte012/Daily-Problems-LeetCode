#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        
        unordered_map<int,int>mp;
    
        int start=0,end=nums.size();
        
        while(start<end)
        {
            if(mp.find(nums[start])!=mp.end())
            {
                if(abs(start-mp[nums[start]])<=k)
                {
                    return true;
                }
            }
                
                
            mp[nums[start]]=start;
        
            start++;     
        }
        
        
        return false;
        
    }
};
