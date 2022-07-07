#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        string s1="",s2="";
        
        
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
              s1.push_back(s[i]);    
            }
            
        }
        
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        
        s2=s1;
        
        reverse(s1.begin(),s1.end());
        
        if(s2==s1)
        {
            return true;
        }
        
            return false;
        
        
    }
};