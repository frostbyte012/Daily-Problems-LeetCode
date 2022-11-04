#include<bits/stdc++.h>
using namespace std;

class Solution {
public:    
    int digitSum(int n)
    {
        int sum=0;
        
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        
        return sum;
    }
    
    int addDigits(int num) {
       
        int sum=0;
        
        if(num<10)
        {
            return num;
        }
        if(num>9)
        {
            int temp=num;
            
            while(temp>9)
            {
               temp=digitSum(temp);
            }
            
            sum=temp;
        }
        
        return sum;
    }
};