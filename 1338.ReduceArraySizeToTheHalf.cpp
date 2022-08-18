#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
       
        int half=arr.size()/2;
        
        unordered_map<int,int>mp;
       
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;            
            
        }
        
        vector<int>freq;
        
        for(auto it : mp)
        {
          freq.push_back(it.second);
        }
        
        sort(freq.begin(),freq.end());
        
        int ans=0,result=0;
        
        for(int i=freq.size()-1;result<half;i--)
        {
            ans++;
            result+=freq[i];
            
        }
        
        return ans;
        
    }
};