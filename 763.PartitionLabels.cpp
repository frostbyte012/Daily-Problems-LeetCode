#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int>mp;
        
        vector<int>ans;
 
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]=i;
        }
        
        int j=0,start=0;
        
        for(int i=0;i<s.length();i++)
        {
            j=max(j,mp[s[i]]);
            
            if(i==j)
            {
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        
        
        return ans;
        
    }
};