#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
      
        stack<char>st;
        
        st.push('#');
        
        for(auto t:s)
        {
            st.push(t);
        }
        
        int c=0;
        
        while(true)
        {
            if(st.top()==' ' && c>0)
                break;
            else if(st.top()=='#') 
                break;
            else if(st.top()=='#')
                break;
            else if(st.top()!=' ')
            {
                c++;
                st.pop();
            }
            else
            {
                st.pop();
            }
        }
        
        return c;
    }
};