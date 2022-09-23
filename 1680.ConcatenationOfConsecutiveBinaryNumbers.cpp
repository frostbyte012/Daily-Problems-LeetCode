#include<bits/stdc++.h>
using namespace std;

class Solution {

    //My logic works in a way that first we check how many space needs to be added the best way to do so is by shifting them to the right and this can be done
    // using the bitwise and '&' operator between the number and the last digit among them 
    // further then adding the current number among them and mod of 10^9 + 7
    
public:
    int concatenatedBinary(int n) {
        
        long mod=1e9+7,res=0,len=0;
        //mod is hoding the modulo function to fit into the integer range
        //res to hold the current number in binary form 
        //len to know if any length needs to be added 
        for(int i=1;i<=n;i++)
        {
            if((i&(i-1))==0)
            {
               //checks if any further space for digit is required and increses by shifting len times towards                    //right
                len++;
            }
        
            //stores the number in res by shifting towards right lentimes making space for adding the current                 //number i
            res=(res<<len)%mod;
          
            //Adds i
            
            res+=i%mod;
        }
        
        return res;
    }
};