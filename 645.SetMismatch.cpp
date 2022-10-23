#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int missing,size=nums.size(),max_ele=*max_element(nums.begin(), nums.end()); 
        map<int,int>mp;
        for(auto c : nums)
        {
            mp[c]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(mp.find(i)!=mp.end())
            {
                if(mp[i]==2)
                    ans.push_back(i);
                
            }
            
            else
            {
                missing=i;
            }
           
        }
        
        ans.push_back(missing);

        
        return ans;    
    }
};