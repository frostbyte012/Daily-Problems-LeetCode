#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> left_prod(nums.size()),right_prod(nums.size());
        
        int left=1;
        
        //For the left pass
        for(int i=0;i<nums.size();i++)
        {
            left_prod[i]=left;
            left*=nums[i];
        }
        
        //For the right pass
        
        int right = 1;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            right_prod[i]=right;
            right*=nums[i];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            right_prod[i]*=left_prod[i];
        }
        
        return right_prod;
        
        
    }
};