#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        //BRUTE FORCE
//         int i=0;
//         for(i=0;i<s.size()/2;i++)
//         {
//             swap(s[i],s[s.size()-1-i]);
//         }
//         for(i=0;i<s.size()-1;i++)
//         {
//             i!=s.size()-1?cout<<s[i]<<",":cout<<s[i]<<endl;
//         }
        
        //USING 2 POINTERS
        
        int i=0,j=s.size()-1;
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }

        for(int i=0;i<s.size();i++)
        {
            i!=s.size()-1?cout<<s[i]<<",":cout<<s[i]<<"\n";
        }
        
        
    }
};