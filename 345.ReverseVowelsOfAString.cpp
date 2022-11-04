#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char x)
    {
        char c=tolower(x);
        
        return c == 'a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    
    string reverseVowels(string s) {
        
     int n=s.size(),r=n-1,l=0;
     
     while(l<r)
     {
         while(l<r && !isVowel(s[l]))
             l++;
         while(r>l && !isVowel(s[r]))
             r--;
         swap(s[l],s[r]);
         l++;
         r--;
     }
        
    return s;
        
    }
};