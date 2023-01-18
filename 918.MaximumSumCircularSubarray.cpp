#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    
    int maxSubArray(vector<int>nums) { 
        
        //function to return the max sum of the subarray when it is linear and non connected
        
        //Based on kadanes algorithm
        
        int i,cursum=0,maxsum=INT_MIN; 
        
        for(i=0;i<nums.size();i++)
        {
            cursum=cursum+nums[i]; // creating current sum until it gets a negative element
            if(cursum>maxsum)
                maxsum=cursum; // keeping the maxsum the max of current sum
            if(cursum<0)  
                cursum=0;   // on encountering a negative val we make current zero
        }
        
        return maxsum;  //finally returning the max sum
    }
    
    
    int maxSubarraySumCircular(vector<int>& nums) {
        
        // Array using the previous function to calculate the non linear max sum
        
         int non_circular_sum=maxSubArray(nums),total_sum=0;
        
         for(int i=0;i<nums.size();i++)
         {
             //calculating the normal sum for finding the total
             total_sum+=nums[i];
             
             // making the elements negative so that the elements whilw passing to kadanes return the most negative element and finally allows us to subtract from the total sum  
             nums[i]=-nums[i];
         }
        
         int circular_sum=total_sum+maxSubArray(nums); // here cicular sum gets calculated by taking total sum and subracting the min element from it ans we did it by passing it to the maxSumArray[Kadane's Algorithm function].
        
         if(circular_sum==0)
             //if circular sum is zero we return non_circular_sum
            return non_circular_sum;

        //returning max of circular_sum vs non_circular_sum         
        return max(circular_sum,non_circular_sum);
        
    }
};