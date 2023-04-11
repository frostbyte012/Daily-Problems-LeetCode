#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        
        stack<char>st; //taking a stack to keep the elements
        
        string sx; // keeping an alternate string to store the answer
        
        for(auto x : s) // iterating the string to check the availability of "*"
        {
            if(x=='*') // if we get then we pop the element form the stack
            {
                st.pop();
            } 
            else // we we just remove the element below that '*'
                st.push(x);
        }
        
        while(!st.empty()) // keeping the top element of the stack
        {
            char x = st.top(); // keeping the top var in the x variable 
            sx+=x; // adding the char x to the string sx to store the sequence
            st.pop();// poping the stack elements
        }
        
        reverse(sx.begin(),sx.end()); // reversing the sx to get the final answer
        
        return sx; // returning the answer
    }
};