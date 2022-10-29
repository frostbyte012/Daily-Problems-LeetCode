#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int a=x,r=0;
        
        if(a<0)
            return false;
        
        while(a)
        {
            r=(r*10)+(a%10);
            a/=10;
        }
        
        if(r==x)
            return true;
        
        return false;
    }
};