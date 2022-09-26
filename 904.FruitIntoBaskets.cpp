#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int l=0,r=0,counter=0,d=0;
        
        unordered_map<int,int>mp;
        
        while(r<fruits.size())
        {
            mp[fruits[r]]++;
            
            if(mp.size()<=2)
            {
                
                d=max(d,r-l+1);
            }
            
            else{
            
            while(mp.size()>2)
              {
                mp[fruits[l]]--;
                
                if(mp[fruits[l]]==0)
                {
                    mp.erase(fruits[l]);
                }
                   l++;
               }    
            }
            
            r++;
                
        }
        
        return d;
      
    }
};
