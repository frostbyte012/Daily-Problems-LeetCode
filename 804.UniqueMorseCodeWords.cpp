#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        unordered_set<string>st;
        unordered_map<char,string>mp
        {
            
            {'a',".-"},
            {'b',"-..."},
            {'c',"-.-."},
            {'d',"-.."},
            {'e',"."},
            {'f',"..-."},
            {'g',"--."},
            {'h',"...."},
            {'i',".."},
            {'j',".---"},
            {'k',"-.-"},
            {'l',".-.."},
            {'m',"--"},
            {'n',"-."},
            {'o',"---"},
            {'p',".--."},
            {'q',"--.-"},
            {'r',".-."},
            {'s',"..."},
            {'t',"-"},
            {'u',"..-"},
            {'v',"...-"},
            {'w',".--"},
            {'x',"-..-"},
            {'y',"-.--"},
            {'z',"--.."},
            
        };
        
        string transformation="";
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                
                transformation+=mp[words[i][j]];
                
                
            }
            
                st.insert(transformation);
                transformation="";
            
        }
        
        
        return st.size();
        
    }
};