#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>mp1,mp2;
        
        for(int i=0;i<ransomNote.length();i++)
        {
            mp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++)
        {
            mp2[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(mp1[ransomNote[i]]>mp2[ransomNote[i]])
            {
                return false;
            }
        }
        
        return true;
        
    }
};

/*

SOLUTION 2 for O(n) Complexity

bool canConstruct(string a, string b) 
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());       
        int j=0;
        for(auto i : b)
        {
            if(i == a[j] && j < a.length()) j++;
        }
        return (j>=a.length);       
    }
*/