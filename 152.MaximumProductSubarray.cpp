#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     
    int maxProduct(vector<int>& nums) {
        
    int n=nums.size(),max_prod=nums[0],min_prod=nums[0],choice1,choice2,ans=nums[0];
        
    for(int i=1;i<n;i++)
    {
        choice1=max_prod*nums[i];
        choice2=min_prod*nums[i];
        max_prod=max(nums[i],max(choice1,choice2));
        min_prod=min(nums[i],min(choice1,choice2));
        ans=max(ans,max_prod);
    }
        
    return ans;
        
    }
};