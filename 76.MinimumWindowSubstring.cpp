#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int>mp;
        
        for(auto c:t)
        {
            mp[c]++;
        }
        
        int start=0,end=0,len=INT_MAX,counter=mp.size();
        
        string ans="";
        
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
                if(end-start<len)
                {
                    len=end-start;
                    
                    ans=s.substr(start,end-start);
                }
              
              char start_char=s[start];  
                
              if(mp.count(start_char)==1)
              {
                  mp[start_char]++;
                  if(mp[start_char]>0)
                  {
                      counter++;
                  }
              }
                
              start++;  
                
            }
            
            
        }
        
        return ans;
    }
};