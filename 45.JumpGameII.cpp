#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size(); //taking the size of the nums
               
        int curMax=0,nextMax=0,jumps=0; // taking three variable for current Maximum element and initialized it to zero, same for the next maximum element and initializing it to zero, and taking the jumps variable for calculation of minimum number of jumps to be taken and initializing it to zero 
        
        if(n<2)  // if the size of the array is less than 2 i.e if 1 or zero theres no point in taking any jump so we return zero 
            return 0;
        
        for(int i=0;i<n;i++) // running throught out the loop to check if that can find the minimum nuber possible of jumps
        {
            nextMax=max(nextMax,i+nums[i]); // checking the nextMax element by comparing max of the ith element + i & next Maximum element : this works like [2,3,1,1,4]
                                                                                                                                                            
            
            if(i==curMax)   // checking if the curMax element is same as the ith index
            {
                jumps++;    // if so that means we reached the minimum ith element that helps us successfully move to the next maximum element taking minimum steps/jumps
                
                curMax=nextMax; // current Maxelement taking the next Maximum element from earlier iterations
                
                if(curMax>=n-1) // if the current maximum element exceeds or reaches the end n-1 the element we terminate and stops it
                    break;
                
            }
        }
        
        return jumps; // finally returning the minimum number of jumps
    }
};

