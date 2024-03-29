#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// TRADITIONAL APPROACH    
//     int singleNonDuplicate(vector<int>& nums) {
       
//         int y;
//         map<int,int>mp;
//         for(auto x:nums)
//             mp[x]++;
//         for(auto x: mp)
//         {
//             if(x.second==1)
//                 {
//                    y=x.first;      
//                    break;
//                 }
//         }
        
//         return y;
//     }
    

// BINARY SEARCH APPROACH
    
      int func(vector<int>& nums,int low,int high)
      {
          int mid=(low+high)/2;
          if(low==high)
              return low;
          if(mid%2==0 && nums[mid]==nums[mid+1])
              return func(nums,mid+1,high);
          else if(mid%2==0 && nums[mid]!=nums[mid+1])
              return func(nums,low,mid);
          else if(mid%2!=0 && nums[mid]==nums[mid-1])
              return func(nums,mid+1,high);
          
          return func(nums,low,mid);
              
          
      }
    
    
      int singleNonDuplicate(vector<int>& nums)
      {
          if(nums.size()==1)
              return nums[0];
          int ans=func(nums,0,nums.size()-1);
          return nums[ans];
      }
    
};