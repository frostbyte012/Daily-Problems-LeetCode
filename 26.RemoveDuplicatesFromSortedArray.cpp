#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,j=nums.size()-1,count=nums.size();
        vector<int>ans;
        
        if(nums.size()==1)
        {
            return 1;
        }
        
        while(i<j)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
                count--;
                
            }
            else
            {
                ans.push_back(nums[i]);
                i++;
            }
        }
        
        ans.push_back(nums[i]);
        
        nums=ans;
        
        return count; 
        
    }
};