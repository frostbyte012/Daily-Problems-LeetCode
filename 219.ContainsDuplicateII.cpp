#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int start=0,n=nums.size();
        
        unordered_map<int,int>mp;
    
        while(start<n)
        {
            
            
            if(mp.find(nums[start])!=mp.end())
            {
                int diff=abs(start-mp[nums[start]]);
                if(diff<=k)
                    return true;
            }
            
            mp[nums[start]]=start;
            
            start++;
            
            
        }

        
        return false;
        
    }
};