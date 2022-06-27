#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    int binary(vector<int> &nums,int left,int right)
    {
        
        
        if(left==right)
        {
            return nums[left];
        }
        
        int mid = left + (right-left)/2;
        
        if(nums[mid]<nums[right])
        {
            return binary(nums,left,mid);
        }
        if(nums[mid]>nums[right])
        {
            return binary(nums,mid+1,right);
        }
        
        return nums[right];
    }
    
public:
    int findMin(vector<int>& nums) {
    
      return binary(nums,0,nums.size()-1);

    }
};