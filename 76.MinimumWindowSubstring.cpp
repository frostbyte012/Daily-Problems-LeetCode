#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int>mp;
        
        // initialize frequency table for t
        for(auto c:t)
        {
            mp[c]++;
        }
        
         // initialize sliding window
        int start=0,end=0,len=INT_MAX,counter=mp.size();
        
        string ans="";
        
        // start sliding window
        while(end<s.length())
        {
            char end_char=s[end];
            // if current char found in map, decrement count
            if(mp.find(end_char)!=mp.end())
            {
                mp[end_char]--;
                if(mp[end_char]==0)
                {
                    counter--;
                }
                
            }
            
            end++;
            // if counter == 0, means we found an answer, now try to trim that window by sliding begin to right.
            while(counter==0)
            {
                // store new answer if smaller than previously best
                if(end-start<len)
                {
                    len=end-start;
                    
                    ans=s.substr(start,end-start);
                }

                 //begin char could be in table or not, 
                // if not then good for us, it was a wasteful char and we shortened the previously found substring.
                
                // if found in table increment count in table, as we are leaving it out of window and moving ahead, 
                // so it would no longer be a part of the substring marked by begin-end window
                // table only has count of chars required to make the present substring a valid candidate
                // if the count goes above zero means that the current window is missing one char to be an answer candidate  
              
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