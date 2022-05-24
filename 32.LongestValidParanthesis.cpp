#include<bits/stdc++.h>
using namespace std;
    int longestValidParentheses(string s) {
        
        int i,count=0;
        string sub;
    
        for(i=0;i<s.length()-1;i++)
        {
            sub+=s[i];
            sub+=s[i+1];
            if(sub=="()")
                count++;
            // cout<<sub<<endl;
            sub="";
        }
     
        cout<<count*2<<endl;
        
    }

    int main()
    {
        string s;
        cin>>s;
        longestValidParentheses(s);
        return 0;
    }