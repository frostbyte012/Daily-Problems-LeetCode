#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
//Recursive approach:
    
//     string removeDuplicates(string s) {
        
//         if(s.empty())
//             return s;
        
//         for(int i=0;i<s.length()-1;i++)
//         {
//             if(s[i]==s[i+1])
//                 return removeDuplicates(s.substr(0,i)+s.substr(i+2));
//         }
        
//         return s;
        
//     }
    
    
//Using string/stack:
    
        string removeDuplicates(string s) {
        
        string ans;
        
        for(auto c : s)
        {
            if(ans.length()&&ans.back()==c)
                ans.pop_back();
            
            else
                ans.push_back(c);
        }
        
        return ans;
        
    }
    
};