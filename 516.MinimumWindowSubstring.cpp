# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        
       unordered_map<char,int> mp;
       for(int i=0;i<t.length();i++)
       {
           mp[t[i]]++;
       }
        
       int mini=0,ans=INT_MAX,count=mp.size(),n=s.length(),j=0,i=0;
        
       while(j<n)
       {
           if(mp.find(s[j])!=mp.end()){
               mp[s[j]]--;
               if(mp[s[j]]==0)
               {
                   count--;
               }
           }
           
           if(count==0)
           {
              while(count==0)
              {
                  if(ans>j-i+1)
                  {
                      ans=j-i+1;
                      mini=i;
                  }
                  
                  if(mp.find(s[i])!=mp.end())
                  {
                      mp[s[i]]++;
                      if(mp[s[i]]>0)
                      {
                          count++;
                      }
                  }
                  
                  i++;
                  
              }
           } 
          j++;      
       }
        
        if(ans==INT_MAX)
        {
            return "";
        }
        
        return s.substr(mini,ans);
        
    }
        
};