#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int dp[101];
    //initializing an array with 101 length as s's length<= 100
    
    int decoding(string s, int i)
    {
        //recursive function for checking the conditions until rntire length is travelled 
        
        if(i==s.length())
        //checking if the entire length is travelled recursivelly for s
            return 1;
        
        if(dp[i]!=-1)
        //if the array has other elements apart from -1 then returned dp[i] value to the cnt value below 
            return dp[i];
        
        long long int cnt=0;
        //cnt var created to store the length of the possible ways generated
        
        if(s[i]!='0')
            cnt+=decoding(s,i+1);
        //if s[i] not equal to zero then cnt will recursivelly have i+1 val
        
        if(i<s.length()-1 && s[i]!='0' && ((s[i]-'0')*10+(s[i+1]-'0')<=26))
            cnt+=decoding(s,i+2);
        //else the last val of cnt will run until i+2 recursion
        
        return dp[i]=cnt;
        
    }
    
    
    int numDecodings(string s) {
        
        memset(dp,-1,sizeof(dp));
        //initializing all vals of dp to -1
        
        return decoding(s,0);
        //starting from 0 length of s
        
        
    }
    
    
    
};