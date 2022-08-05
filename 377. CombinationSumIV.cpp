#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int solveMem(vector<int>&num,int tar,vector<int>&dp)
    {
        if(tar<0)
        {
            return 0;
        }
        
        if(tar==0)
        {
            return 1;
        }
        
        if(dp[tar]!=-1)
        {
            return dp[tar];
        }
        
        int ans=0;
        
        for(int i=0;i<num.size();i++)
        {
            ans+=solveMem(num,tar-num[i],dp);
        }
        
        dp[tar]=ans;
        
        return dp[tar];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp (target+1,-1);
        
        return solveMem(nums,target,dp);
        
    }
};