#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          
        
        unordered_map<string,vector<string>>mp;
        
        vector<vector<string>>ans;
        
        int i=0;
        
        while(i<strs.size())
        {
            string temp = strs[i];
            
            sort(temp.begin(),temp.end());
            
            mp[temp].push_back(strs[i]);
            
            i++;
            
        }
        
        for(auto t=mp.begin();t!=mp.end();++t)
        {
            ans.push_back(t->second);
        }
        
        return ans;
        
        
    }
};
