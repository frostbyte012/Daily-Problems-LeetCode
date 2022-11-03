#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length()!=t.length())
               return false;
        
        unordered_map<char,char>mp,mp1;
        
        for(int i=0;i<s.length();i++)
        {
           if(mp.find(s[i])==mp.end() && mp1.find(t[i])==mp1.end())
           {
                  mp[s[i]]=t[i];
                  mp1[t[i]]=s[i];
           }
           if(mp[s[i]]!=t[i]||mp1[t[i]]!=s[i])
           {
               return false;
           }
        }
        return true;
    }
};