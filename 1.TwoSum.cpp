#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         int i;

//         for(i=0;i<nums.size()-1;i++)
//         {
//            for(int j=i+1;j<nums.size();j++)
//            {
//                if(nums[i]+nums[j]==target)
//                {
//                    return {i,j};
//                }
//            }
//         }
        
//        return {0,0}; 
        
        
        
// Optimised approach


        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
           
           if(mp.find(target-nums[i])!=mp.end())
           {
               return {mp[target-nums[i]],i};
           }
            mp[nums[i]]=i;
        }
        
        return {};
        
                
    }    
};