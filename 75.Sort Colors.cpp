#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
//         vector<int>zero,one,two;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)
//                 zero.push_back(nums[i]);
//             else if(nums[i]==1)
//                 one.push_back(nums[i]);
//             else
//                 two.push_back(nums[i]);
//         }
        
//         nums={};
        
//         for(int i=0;i<zero.size();i++)
//         {
//             nums.push_back(zero[i]);
//         }
//         for(int i=0;i<one.size();i++)
//         {
//             nums.push_back(one[i]);
//         }
//         for(int i=0;i<two.size();i++)
//         {
//             nums.push_back(two[i]);
//         }
        
        
        int one=0,zero=0;
        
        for(auto it:nums){
            if(it==0)
                zero++;
            else if(it==1)
                one++;
            
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(i<zero)
                nums[i]=0;
            else if(i>=one+zero)
                nums[i]=2;
                
            else
                nums[i]=1;
        }
        
        
    }
};