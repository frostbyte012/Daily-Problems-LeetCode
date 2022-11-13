#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    stack<string>st;
    
    void printWords(string str)
        {
           string word;
           stringstream iss(str);
           while (iss >> word)
                st.push(word);
        } 
    
    string reverseWords(string s) {
        string ans;
        printWords(s);
        while(!st.empty())
        {
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};