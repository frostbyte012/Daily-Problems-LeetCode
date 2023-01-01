#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //for extracting each word into a vector "dogs cat cat dogs" -> ["dogs","cat","cat","dogs"]
    vector<string>words(string str)
    {
         vector<string>ans;
         // word variable to store word
         string word;
 
         // making a string stream
         stringstream iss(str);
 
         // Read and print each word.
         while (iss >> word)
                ans.push_back(word);
        
         return ans;
    }
    
    bool wordPattern(string pattern, string s) {
        
        map<char,string>mp1; // for mapping chars with words
        
        map<string,char>mp2; // for mapping words with chars
        
        vector<string>parts=words(s); // extracting the words in the string
        
        if(parts.size()!=pattern.length()) // if the words are not of common length with that of the string 
            //chars : "aaa"
            //words : "aa aa aa aa"
           return false;
        
        for(int i=0;i<pattern.size();i++) //filling the map and using the map for checking if there is two mapping for char             and words and viceversa
           {
              if(mp1.find(pattern[i])!=mp1.end() && mp1[pattern[i]]!=parts[i]) // if one char maps differnt words
                       return false;
              else if(mp2.find(parts[i])!=mp2.end() && mp2[parts[i]]!=pattern[i])// if one word maps differnt chars
                       return false;
            
              mp1[pattern[i]]=parts[i]; //mapping char for word 
              mp2[parts[i]]=pattern[i];// mapping word for char
            }
        
        return true;
    }
};