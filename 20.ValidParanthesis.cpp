#include<bits/stdc++.h>
using namespace std;
bool validParnatheses(string s)
{
    stack <char> st;
    map<char,char> mp;
    mp.insert(pair<char,char>(']','['));
    mp.insert(pair<char,char>('}','{'));
    mp.insert(pair<char,char>(')','('));
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
           st.push(s[i]);
        else
            {
                if(!st.empty() && st.top()==mp[s[i]])
                   st.pop();
                else
                   return false;
                   
            }
    } 

    return st.empty();
    
}

int main()
{
    string s;
    cout<<"Enter the parantheses : "<<endl;
    cin>>s;
    cout<<validParnatheses(s)<<endl;
    return 1;
}