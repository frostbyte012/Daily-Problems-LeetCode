#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countVowelPermutation(int n) {
        
        long e=1,a=1,i=1,o=1,u=1,mod=pow(10,9)+7;
        long a2,e2,i2,o2,u2;
        
        for(int j=2;j<=n;j++)
        {
            a2=(e+i+u)%mod;
            e2=(a+i)%mod;
            i2=(e+o)%mod;
            o2=i;
            u2=(i+o)%mod;
            
            
            a=a2,e=e2,i=i2,o=o2,u=u2;
            
        }
        
        return (a+e+i+o+u)%mod;
        
    }
};




