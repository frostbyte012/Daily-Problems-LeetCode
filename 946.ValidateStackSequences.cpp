#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>st; //storing the integers into the stack
        
        int count=0; // counting the elements
        
        for(auto x : pushed) // taking the elements into the stack one by one
        {
            st.push(x); // push them into the stack 
            
            while(!st.empty() && st.top()==popped[count]) // check the stack top element and compare with the top element 
            {
                st.pop(); // pop the elements then taking the flow 
                
                count++; // count it one by one
            }
            
        }
        
        return st.empty(); // return and check if the stack is empty or not
    }
};