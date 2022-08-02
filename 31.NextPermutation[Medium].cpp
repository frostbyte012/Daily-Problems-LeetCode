#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
         int len=nums.size()-1,l,k;
         
         for(k=len-1;k>=0;k--)
         {
             if(nums[k]<nums[k+1])
             {
                 break;
             }
                 
         }
         if(k<0)
         {
             reverse(nums.begin(),nums.end());
         }
          else{
              for(l=len;l>k;l--)
              {
                  if(nums[l]>nums[k])
                  {
                      break;
                  }
              }
              
              swap(nums[l],nums[k]);
              reverse(nums.begin()+k+1,nums.end());
              
              
          }
        
        
    }
};