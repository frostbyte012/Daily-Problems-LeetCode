#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    

    int searchInsert(vector<int>& nums, int target) {

         int end=nums.size()-1,start=0;
        
          while(start<=end)
          {
              int mid=(start+end)/2;
              
              if(nums[mid]==target)
              {
                  return mid;
              }
              
              else if(nums[mid]<target)
              {
                 start=mid+1;
              }
              else
              {
                 end=mid-1;
              }
          }
        
         return start;
        
    }
};