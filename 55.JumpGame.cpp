#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int reachable=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(reachable<i)
                 return false;
            else{
                reachable=max(reachable,i+nums[i]);
            }
        }
        return true;        
    }
};