#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        
        stack <char> st;
        map<char,char> mp;
        mp.insert(pair<char,char>(')','(')); // storing the alternate pair pf each stack element 
        mp.insert(pair<char,char>(']','[')); // storing the alternate pair of each stack element
        mp.insert(pair<char,char>('}','{'));// storing the alternative pair of each stack element
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') // if the element char appears to be opening brackets it pushes into the stack
                st.push(s[i]);
            else
            {
                if(!st.empty() && st.top()==mp[s[i]]) // else checks if the stack is empty and the element is closing bracket's alternative if so then pops the element   
                    st.pop();
                
                else // else returns false;
                    return 0;
                
            }
        }
        
        return st.empty(); // finally it returns true or false storing the elements or manipulating them
    }
};