# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void calc(int n,int k,int val,vector<int> &ans )
    {
     
        if(n==0)
        {
            ans.push_back(val);
            return;
        }
        
        if(val%10+k>=0 && val%10+k<10)
        {
            int temp=(val*10)+(val%10+k);
            calc(n-1,k,temp,ans);
        }
        
        if(k!=0 && val%10-k>=0 && val%10-k<10)
        {
            int temp=(val*10)+(val%10-k);
            
            calc(n-1,k,temp,ans);
        }
        
    }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int>ans;
        
        for(int i=0;i<9;i++)
        {
            calc(n-1,k,i+1,ans);
            
        }
        
        return ans;
        
    }
};