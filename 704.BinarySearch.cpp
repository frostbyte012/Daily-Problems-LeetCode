#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int begin=0,end=nums.size()-1; // begin acts as the left pointer , end acts as the right pointer
        
        while(begin<=end) // a loop that prevents both the pointer to cross each other
        {
            int mid = (begin+end)/2; // mid acts as the point where we may get the result that takes the mid value of the vector
        
            if(nums[mid]==target)
                return mid; // if we get the target we return the position
            
            if(nums[mid]>target)
                end=mid-1; // if the taget is bigger than the obtained value we shrink the vector by taking the end as the point smaller than the mid by 1.
            
            else
                begin=mid+1;// if the taget is smaller than the obtained value we shrink the vector by taking the end as the point bigger than the mid by 1.
         }
        
        return -1;//  if we don't get we return -1
    }
};