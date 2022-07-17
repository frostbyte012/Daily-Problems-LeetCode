#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequences(string s) {
        
       const int n=s.size();
        
       long long dp[n+100][n+100];
        
       memset(dp,0,sizeof dp);
        
       for(int i=n-1;i>=0;i--)
       {
           dp[i][i]=1;
           
           for(int j=i+1;j<n;j++)
           {
               
               if(s[i]!=s[j])
               {
                   dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
                 
               }
               
               else{
                   
                   dp[i][j]=dp[i+1][j-1]*2;
                   
                   int hi=j-1,lo=i+1;
                   
                   while(lo<=hi && s[i]!=s[lo])
                       ++lo;
                   while(lo<=hi && s[j]!=s[hi])
                       --hi;
                   if(lo>hi)
                       dp[i][j]+=2;
                   else if(lo==hi)
                       dp[i][j]+=1;
                   else
                       dp[i][j]-=dp[lo+1][hi-1];
                   
               }
               
               dp[i][j]=dp[i][j]<0?dp[i][j]+1000000007LL:dp[i][j]%1000000007LL;
               
           }
       }
        
        
        return dp[0][n-1]%1000000007;
            
        
    }
};