#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int digitSquareSum(int n)
    {
      int sum=0; 
      while(n>0)
      {
        sum+=(n%10)*(n%10);
        n/=10;
       }

       return sum;
     }
    
    bool isHappy(int n) {
        
        int sum=n;
        //either the loop will end in 1 or 89 for any square of digit's
        
        while(1)
        {
            if(digitSquareSum(sum)==1)
                return true;
            if(digitSquareSum(sum)==89)
                return false;
            sum=digitSquareSum(sum);
        }
        
        
    }
};