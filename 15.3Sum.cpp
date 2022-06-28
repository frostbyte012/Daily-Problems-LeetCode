#include<bits/stdc++.h>
using namespace std;
class Solution {
    
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            
            int current=nums[i],start=i+1,end=n-1,target=-current;
            while(start<end)
            {
                if(nums[start]+nums[end]==target)
                {
                    res.push_back({nums[i],nums[start],nums[end]});
                    while(start<end&&nums[start]==nums[start+1])
                    {
                        start++;
                    }
                    while(start<end&&nums[end]==nums[end-1])
                    {
                        end--;
                    }
                    start++;
                    end--;
                }
                else if(target<nums[start]+nums[end])
                {
                    end--;
                }
                else{
                    start++;
                }
            }
            while(i+1<n&&nums[i]==nums[i+1])
            {
                i++;
            }
        }
        
        return res;
        
        
    }
};