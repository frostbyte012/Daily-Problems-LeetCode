#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int left=0,most_frequent_character=0,max_value_in_map=0,max_length=0;
        
        unordered_map<char,int> m;
        
        for(int right=0;right<s.length();right++)
        {
            m[s[right]]++;
            
            most_frequent_character=max(most_frequent_character,m[s[right]]);
            
            if((right-left+1)-most_frequent_character>k)
            {
                m[s[left]]--;
                
                left++;
            }
            
            max_length=max(max_length,right-left+1);
        }
        
        return max_length;
        
    }
};