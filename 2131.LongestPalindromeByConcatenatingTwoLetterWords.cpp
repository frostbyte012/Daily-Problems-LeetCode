#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
       
        unordered_map<string,int>mp;
        
        for(auto it : words)
        {
                mp[it]++;
        }
        
        int count=0;
        
        bool flag=false;
        
        for(auto it : words)
        {
            string word=it;
            
            reverse(word.begin(),word.end());
            
            if(it!=word && mp[it]>0 && mp[word]>0)
            {
                   count+=4;
                   mp[it]--;
                   mp[word]--;
            }
            
            else if(it==word&&mp[it]>1)
            {
                count+=4;
                mp[it]-=2;
            }
            
            else if(it==word&&!flag&&mp[it]>0)
            {
                mp[it]--;
                count+=2;
                flag=true;
            }
            
         }
        
        
        return count;
        
        }
        
};