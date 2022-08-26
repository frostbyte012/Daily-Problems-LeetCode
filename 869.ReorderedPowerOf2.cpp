#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string x=to_string(n);
        sort(x.begin(),x.end());
        
        for(int i=0;i<31;i++)
        {
            int num=pow(2,i);
            string s=to_string(num);
            sort(s.begin(),s.end());
            if(x==s)
                return true;
        }
        
        return false;
        
    }
};