#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
           //BRUTE-FORCE

          //     int countOdds(int low, int high) {
        
        //         int count=0;
        
      //         for(int i=low;i<=high;i++) //checking by iterating the loop and individually seeing if the ith element is odd 
     //         {
    //             if(i%2!=0) // if odd then wont keep remainder 0 by dividing with zero
   //                 count++; //counting the odd if condition passes
  //         }
        
//         return count; // ultimately returning the count of the odd elements in the interval
        
    //     }
    
    //INTUITIVE-ARITHMETHIC-APPROACH 
    
        int countOdds(int low, int high) { 
        
        if(low%2==0 && high%2==0) // if the included elements are both even then simpl every alternate element between will be odd
            return (high-low)/2;
        
        return (high-low)/2+1; // else every alternate element between high and low including either of them will be odd  
        
    }
    
    
    
};