#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count=0; //counter for checking  if the numbers are same or not
        
        for(int i=0;i<nums.size()-1;i++)  // looping and checking if the digits 
        {
            for(int j=i+1;j<nums.size();j++) // looping and checking if the digits are same as the previous once
            {
                if(nums[i]==nums[j]) // if same we increse the counter
                    count++; // increasing the counter
            }
        }
        
        return count; // finally returning the counter
    }
};