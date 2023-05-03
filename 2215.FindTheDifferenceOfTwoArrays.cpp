#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool doesntExist(int val,vector<int>nums)
    {
      for(int i=0;i<nums.size();i++)
        {            
            if(val==nums[i])
               return false;
        }
        return true;
    }
    
    vector<vector<int>>findDifference(vector<int>& nums1, vector<int>& nums2){
        
        vector<int>ans1,ans2;
        
        set<int>s1,s2;
        
        for(int i=0;i<nums1.size();i++)
        {   
            if(doesntExist(nums1[i],nums2))
            {
                s1.insert(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++)
        {   
            if(doesntExist(nums2[i],nums1))
            {
                s2.insert(nums2[i]);
            }
        }
        
        for(auto x : s1)
        {
            ans1.push_back(x);
        }
        
        for(auto x : s2)
        {
            ans2.push_back(x);
        }
        
        return {ans1,ans2};
      
    }
};