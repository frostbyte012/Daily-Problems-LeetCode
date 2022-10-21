#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<int,int>mp;
        
        for(auto c:p)
        {
           mp[c]++; 
        }
        
        int end=0,start=0,counter=mp.size(),len=p.length();
        
        vector<int>ans;
        
        while(end<s.length())
        {
            char end_char=s[end];
            
            if(mp.find(end_char)!=mp.end())
            {
               mp[end_char]--;
                
               if(mp[end_char]==0)
               {
                   counter--;
               }
            }
            
            end++;
            
            while(counter==0)
            {
                char start_char=s[start];
                
                if(len==(end-start))
                {
                    ans.push_back(start);
                }
                
                
                if(mp.count(start_char)==1)
                {
                    mp[start_char]++;
                    
                    if(mp[start_char]>0)
                          counter++;
                }
                
                
            start++;
                
            }
            
        }
        
        return ans;
    }
};