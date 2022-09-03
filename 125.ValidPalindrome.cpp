#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
//         string s1="",s2="";
        
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(isalnum(s[i]))
//             {
//               s1.push_back(s[i]);    
//             }
            
//         }
        
//         transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        
//         s2=s1;
        
//         reverse(s1.begin(),s1.end());
        
//         if(s2==s1)
//         {
//             return true;
//         }
        
//             return false;
        
        
        string s1="",s2="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
                s1.push_back(s[i]);
        }
        
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        
        int i=0,j=s1.length()-1;
        
        while(i<s1.length() && j>=0)
        {
            if(s1[i]!=s1[j])
                return false;
            j--;
            i++;
        }
        
        return true;
    }
};