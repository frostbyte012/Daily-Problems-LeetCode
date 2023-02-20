#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    

    int searchInsert(vector<int>& nums, int target) {


        int start=0,end=nums.size()-1; // initializing the start with zero index and end with the last index
        
        while(start<=end)  // looping until we find the element and return it
        {
            int mid=(start+end)/2; // taking the avg mid of the end and the start element 
            
            if(nums[mid]==target) //if the mid index of the nums ,matches with the target then we return the position that's the mid 
            {
                return mid;    
            }
            
            else if(nums[mid]<target) //if the mid index of the nums ,less than the target then we increase the start  position of the mid+1 
            {
                start=mid+1;
            }
            
            else // if the mid index of the nums, greater than the target then we decrease the end by 1
            {
                end=mid-1;
            }
            
        }
        
        
        return start; // finally returning the start if the position not find yet and we return the position to be inserted 
        
        
    }
};


