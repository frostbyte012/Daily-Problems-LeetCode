#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
       int numsize=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=numsize-3;i>=0;i--)
        {
            
            if(nums[i]+nums[i+1]>nums[i+2])
            return nums[i]+nums[i+1]+nums[i+2];
        }
        
            return 0;
        
    }
};