#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            
        vector<int>ans,v=nums;

        /*
        The code commented gives output with less optimal solution and more time complexity
        while the one below worls better 
        */
        
//         int count=0;    
//         for(int i=0;i<nums.size();i++)
//         {
//             for(auto it : nums)
//             {
//                 if(it<nums[i])
//                 {
//                     count++;
//                 }
//             }
            
//             ans.push_back(count);
//             count=0;
            
//         }
        
//         return ans;
     
        
        sort(nums.begin(),nums.end());
        
        for(auto it:v)
        {
            int i=lower_bound(nums.begin(),nums.end(),it)-nums.begin();
            ans.push_back(i);
        }
        
        return ans;
    }
};