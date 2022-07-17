#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        
    
        int p_len=p.length(),s_len=s.length();
        
        vector<vector<int>> dp (1+s_len,vector<int>(1+p_len));
        
        dp[0][0]=1;
        
        for(int i=0;i<=s_len;i++)
        {
        
            for(int j=1;j<=p_len;j++)
            {
                if(i&&(s[i-1]==p[j-1]||p[j-1]=='?'))
                    dp[i][j]=dp[i-1][j-1];
                
            
                else if(p[j-1]=='*')
                    dp[i][j]=(dp[i][j-1]||(i&&dp[i-1][j]));
            }    
        }
        
        
            
        return dp[s_len][p_len];
        
        
    }
    
};
