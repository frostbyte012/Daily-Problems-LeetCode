#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
    
     int m,r=0,flag=1;

        
        while(x)
        {
            m=x%10;

            if(r<INT_MIN/10||r>INT_MAX/10)
            {
                return 0;
            }
            
            r=r*10+m;
            x=x/10;
        }
        
        return r*flag;
            
            
        
    }
};