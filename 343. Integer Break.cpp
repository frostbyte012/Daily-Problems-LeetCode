#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        
        if(n<=3)//applying simple maths intuition we need to return n-1 if it is less than 3
            return n-1;
        
        if(n%3==0)//applying the simple maths to check if the number n is divisible by 3 if so return it n/3 times multiplied
            return pow(3,n/3);
        
        if(n%3==1)//applying the simple maths to check if the number n on taking remainder by 3 gives 1, so add up to one of the 3 that divides the dividend and add that remainder 1 to it such that it becomes 3*3*3....3(n-1)th times and 4 = (3+1)the remaining number gets multiplied with it 
            return pow(3,n/3-1)*4;
        
        // if(n%3==2) else if the number gives 2 as the remainder that means it is a multiplied 3*3*3*...3(n/3)th time with 2 being multiplied once 
        return pow(3,n/3)*2;
        
    }
};