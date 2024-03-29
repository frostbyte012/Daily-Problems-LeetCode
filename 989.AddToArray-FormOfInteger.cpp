#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
       //iterating from the back so that the digits gets individually added backwards of the ith digit of the array
        
       for(int i=num.size()-1;i>=0;i--)
       {
           num[i]+=k;  // taking the number k and adding into the number[i]
           k=num[i]/10; // taking the number k and storing only the remaining digitd of them
           num[i]=num[i]%10; //taking the num[i] and storing only the last remaining portion of the num[i]
       }
        
       // now if the k number has digits greater than the size of the array then we can just check and individually iterate by putting the last element of of k in the beginning of the vector as carries 
        
       while(k)
       {
           num.insert(num.begin(),k%10); // inserting the individual carries at the begining
           k/=10; // reducing the k's used digit in the num
       }
        
       return num; // ultimately returning the num
        
    }
    
};