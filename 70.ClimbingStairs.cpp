#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        
        int curr=1,prev=1,ans=0;
        
        if(n==1)
            return 1;
        
        if(n==0)
            return 0;
        
        for(int i=2;i<=n;i++)
            {
            
              ans=curr+prev;
              prev=curr;
              curr=ans;
        
            }
            
            return ans;
        
    }
};