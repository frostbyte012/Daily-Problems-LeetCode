#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        // first we sort the entire vector to find the difference in order
        sort(arr.begin(),arr.end());
        
        //the we loop throught the entire vector to check the differnece of consecutive numbers 
        for(int i=0;i<arr.size()-2;i++)
        {
            if(arr[i+2]-arr[i+1]!=arr[i+1]-arr[i]) // checking the difference of i+2th number and i+1th number with i+1 th numbe and ith number 
                 return false; // if they aren't same then we return false
        }
        
        return true; // else we return true
    }
};