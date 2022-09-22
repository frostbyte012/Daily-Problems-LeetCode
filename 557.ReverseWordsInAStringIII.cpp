#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseFunc(string &s,int i,int j)
    {
        while(i<j)
        {
            swap(s[i++],s[j--]);
        }
        
    }
    
public:
    string reverseWords(string s) {
        
        int start=0,end=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                end=i-1;
                reverseFunc(s,start,end);
                start=i+1;
            }
        }
        
        reverseFunc(s,start,s.length()-1);
        
        return s;
        
    }
};