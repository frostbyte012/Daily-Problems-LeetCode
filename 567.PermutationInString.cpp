#include<bits/stdc++.h>
using namespace std;

/**
Coder - Deepraj Majumdar
LinkedIn - https://www.linkedin.com/in/deepraj-majumdar-2302b7199
GitHub - 
mail - ai.frostbyte012@gmail.com

**/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     
        map<char,int>mp;   //creating a hash map for storing the frequencies of the s1 string
        
        for(auto it : s1) //storing the frequencies in the map
            mp[it]++;
        
        int k=s1.size();  // taking the length of the s1 string
        
        int i=0,j=0;   // to pointers for mainting the sliding window
        
        int counter=mp.size();  // taking the map size holding the s1 string
        
        while(j<s2.size())   // running the operations loop
        {
            
            if(mp.find(s2[j])!=mp.end())  // checking if s2[j] element is present in the map or not
            {
                mp[s2[j]]--;    // if it is present create a secreat encoded sequence deleting the individual frequencies of the map elements;
                
                if(mp[s2[j]]==0) // if the frequency of the particular eleement in the map becomes zero, reduce the counter by 1 to generate the logic flow;
                    counter--;
            }
            
            if(j-i+1<k)   // now checking if the window is allowed to expand in the allowed size i.e less than k, size of the s1 string
                j++;      
            
            else if(j-i+1==k)   // if the window is exactly the size of the s1 string 
            {
                if(counter==0)  // now checking if the counter size is zero indicating the string sequence matched the elements of map making counter=0
                    return true; // this confirms the sequence is a permutation of s1 string;
                
                if(mp.find(s2[i])!=mp.end()) // if not that indicates that partial sequence was obtained and that we need to recover the element's frequency  deleted
                {
                    mp[s2[i]]++;  // hence forth the recovery begins
                    
                    if(mp[s2[i]]==1)  // if the sequence finds the above operations made the counter reduce partially by 1 then it is required to recover counter as well
                        counter++;
                }
                
                j++;  // expanding the right side of the window
                
                i++;  // shrinking the left side of the window
                
            }
            
        }
        
        return false;  // if the sequence doesn't return the permutation formation then the code needs to return there were no permutation obtained
        
    }
};