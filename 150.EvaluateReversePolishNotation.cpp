#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int evalRPN(vector<string>& tokens) {
        
         string t=tokens.back();
         tokens.pop_back();
         if(t!="+" && t!="-" && t!="/" && t!="*")
            return stoi(t);
         else
         {
             long long int b=evalRPN(tokens);
             long long int a=evalRPN(tokens);
             if(t=="+")
                return a+b;
             else if(t=="-")
                return a-b;
             else if(t=="/")
                return a/b;
             else return a*b;
         }

    }
};