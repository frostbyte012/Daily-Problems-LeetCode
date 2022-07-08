#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           
        string s="";
        
        int small=8999,len=strs.size();
        
        for(int i=0;i<len;i++)
        {
            if(small>strs[i].length())
            {
                small=strs[i].length();
            }
        }
        
        
        for(int i=0;i<small;i++)
        {
            char x = strs[0][i];
            
            for(int j=0;j<strs.size();j++)
            {
                if(x!=strs[j][i]){
                     return s;
                }
                   
            }
            
            s+=x;
        }
        
        return s;
    }
};