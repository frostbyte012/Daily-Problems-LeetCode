#include<bits/stdc++.h>
using namespace std;


class Solution{

public:
    int maximumUniqueSubarray(vector<int>& nums){

        unordered_set<int> unique;
        int start=0,end=0,max_sum=0,running_sum=0;
        while(end<nums.size())
        {
            if(unique.find(nums[end])!=unique.end())
            {
                unique.erase(nums[start]);
                running_sum-=nums[start];
                start++;
            }
            else{
                unique.insert(nums[end]);
                running_sum+=nums[end];
                max_sum=max(max_sum,running_sum);
                end++;

            }
        }

        return max_sum;
    }
};