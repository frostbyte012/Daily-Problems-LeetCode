#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int s_pointer=0,t_pointer=0;
        
        while(t_pointer<t.length())
        {
            if(s[s_pointer]==t[t_pointer])
            {
                t_pointer++;
                s_pointer++;
            }
            else{
             t_pointer++;   
            }
        }
        
        return s_pointer==s.length();
        
    }
};
