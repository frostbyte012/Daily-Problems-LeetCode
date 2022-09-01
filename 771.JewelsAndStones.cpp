#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,char>mp;
        
        int count=0;
        
        for(auto it : jewels)
        {
            mp[it]++;
        }
        
        for(auto it : stones)
        {
            count+=mp[it];
        }
        
        return count;
        
    }
};