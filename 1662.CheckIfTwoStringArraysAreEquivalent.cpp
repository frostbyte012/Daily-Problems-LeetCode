#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string s1="",s2="";
        
        for(auto c : word1)
        {
            s1+=c;
        }
        
        for(auto c : word2)
        {
            s2+=c;
        }
        
        if(s1==s2)
        {
            return true;
        }
        
        return false;
    }
};