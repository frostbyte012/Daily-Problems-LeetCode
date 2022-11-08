#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int>sixNine;
    
        while(num!=0)
        {
            sixNine.push_back(num%10);
            num/=10;
        }
                
        reverse(sixNine.begin(),sixNine.end());
        
        for(int i=0;i<sixNine.size();i++)
        {
            if(sixNine[i]!=9)
            {
                sixNine[i]=9;
                break;
            }
            
        }
        
        int number=0;
        
        for(auto c : sixNine)
         {
            number=(number*10)+c;      
         }
        
        return number;
        
    }
};