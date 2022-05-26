#include<bits/stdc++.h> 
using namespace std;
int longestValidParentheses(string s)
{
    stack <int> st;
    st.push(-1);
    int i,mx=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='(')
           st.push(i);
        else{
            st.pop();
            if(st.empty())
               st.push(i);
            else
               mx=max(mx,i-st.top());

        }    
    
    }
    return mx;
}

int main()
{
    string s;
    cout<<"Enter the parentheses sequence :"<<endl;
    cin>>s;
    cout<<longestValidParentheses(s)<<endl;
    return 1;
}

