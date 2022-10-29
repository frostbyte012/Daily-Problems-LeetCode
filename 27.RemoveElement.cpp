#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums[i]=INT_MAX;
                cnt++;
            }
            
        }
        
        sort(nums.begin(),nums.end());
        
        return nums.size()-cnt;
        
    }
};