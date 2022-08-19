#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        unordered_map<int,int>left;
        unordered_map<int,int>seq;
        
        for(auto i:nums)
        {
            left[i]++;
        }
        
        for(auto x : nums)
        {
             
            if(left[x]==0)
                continue;
            left[x]--;
            
            if(seq[x-1]>0)
            {
                seq[x-1]--;
                seq[x]++;
            }
            
            else if(left[x+1]!=0 && left[x+2]!=0)
            {
                left[x+1]--;
                left[x+2]--;
                seq[x+2]++;
            }
            
            else
                return false;
            
        }

        
        return true;
        
        

  }

};