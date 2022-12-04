#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size(),min=INT_MAX,res;
        
        vector<long long>prefixsum(n+1);
        vector<long long>suffixsum(n+1);
        
        for(int i=0;i<n;i++)
        {
            prefixsum[i+1]=prefixsum[i]+nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            suffixsum[i]=suffixsum[i+1]+nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            long long leftarraysumavg=prefixsum[i+1];
            
            leftarraysumavg/=(i+1);
            
            long long rightarraysumavg=suffixsum[i+1];
            
            if(i!=n-1)
            {
                rightarraysumavg/=(n-i-1);
            }
            
            if(abs(leftarraysumavg-rightarraysumavg)<min)
            {
                min=abs(leftarraysumavg-rightarraysumavg);
                res=i;
            }
        }
        
        return res;
        
    }
};