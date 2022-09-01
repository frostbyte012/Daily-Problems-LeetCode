
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         int i;

//         for(i=0;i<nums.size()-1;i++)
//         {
//            for(int j=i+1;j<nums.size();j++)
//            {
//                if(nums[i]+nums[j]==target)
//                {
//                    return {i,j};
//                }
//            }
//         }
        
//        return {0,0}; 
        
        
        
// Optimised approach

        //USING THE HASH MAP:-

//         unordered_map<int,int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
           
//            if(mp.find(target-nums[i])!=mp.end())
//            {
//                return {mp[target-nums[i]],i};
//            }
//             mp[nums[i]]=i;
//         }
        
//         return {};
        
        
//      USING THE TWO POINTERS METHOD:
        

        
        
    
        vector<pair<int,int>>num;
        
        for(int i=0;i<nums.size();i++)
        {
            num.push_back(pair<int,int>(nums[i],i));
        }
            
        sort(num.begin(),num.end());
        
        int i=0,j=nums.size()-1;
        
        while(i<j)
        {
            if(num[i].first+num[j].first==target)
            {
                return {num[i].second,num[j].second};
            }
            
            else if(num[i].first+num[j].first>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        
        return {-1,-1};     
    }    
        
};