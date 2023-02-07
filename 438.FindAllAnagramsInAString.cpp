#include<bits/stdc++.h>
using namespace std;

/**
Coder - Deepraj Majumdar
LinkedIn - https://www.linkedin.com/in/deepraj-majumdar-2302b7199
GitHub - https://github.com/frostbyte012
mail - ai.frostbyte012@gmail.com

**/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<int,int>mp;  //using a hashmap for storing the entire frequency mapping of the string s into the map
        
        for(auto c:p)  // storing the frequency mapping
        {
           mp[c]++; 
        }
        
        int end=0,start=0; // declaring the end,start var for maintaining the window in the string s
        
        int counter=mp.size(); // counter variable for storing the map size for decoding a pattern that will help us track the frequency of the string element s 
        
        int len=p.length();  // integer for storing the length of the string p
        
        vector<int>ans;  // for storing the beginning indexes of the anagrams
        
        while(end<s.length()) // entering the execution of the operation
        {
            char end_char=s[end]; // first we check on every first char if they are present into the map 
            
            if(mp.find(end_char)!=mp.end()) // checking if they are present in the map
            {
               mp[end_char]--; //if so we reduce their frequency
                 
               if(mp[end_char]==0) //  if the frequency of the map element becomes zero 
               {
                   counter--;  // reducing the counter by 1 to create a sequence for helping us detect the anagram pattern
               }
            }
            
            end++; // we expand the window to right to expore more of the anagrams if present 
            
            while(counter==0)  // now time to check the left side of the window and shrink
            {
                char start_char=s[start]; // checking the left most element for shrinking
                
                if(len==(end-start)) // if the length of the window matches the string for anagram we store them into the vector, i.e their indexes
                {
                    ans.push_back(start); // storing the index
                }
                
                
                if(mp.count(start_char)==1) // now time to shrink the window and check if the sequence is incomplete for detecting and considering the anagram pattern
                {
                    mp[start_char]++; //if the pattern formation is incomplete then we restore back the pattern for frequency
                    
                    if(mp[start_char]>0) // also restoring the counter for detecting the pattern for future anagrams in the string
                          counter++;
                }
                
                
            start++; //  finally shrinking the left side of the window for moving towards right
                
            }
            
        }
        
        return ans; // returning the answer
    }
};