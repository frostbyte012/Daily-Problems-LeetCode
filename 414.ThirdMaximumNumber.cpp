#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int>st;
        
        vector<int>ans;
        
        for(auto c : nums)
        {
            st.insert(c);
        }
        
        for(auto x : st)
        {
            ans.push_back(x);
        }
        
        sort(ans.begin(),ans.end());
        
        if(ans.size()<3)
            return ans[ans.size()-1];
        else
            return ans[ans.size()-3];
        
    }
};