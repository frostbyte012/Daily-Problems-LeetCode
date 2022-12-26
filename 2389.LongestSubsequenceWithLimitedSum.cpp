#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        vector<int>ans;
        
        sort(nums.begin(),nums.end());
        
        for(auto querry : queries)
        {
            int count=0;
            
            for(auto num : nums)
            {
                if(querry>=num)
                {
                    querry-=num;
                    count++;
                }
                else
                {
                    break;
                }
            }
            
            ans.push_back(count);
        }
        
        return ans;
    }
};