#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        map<int,int>mp; // map for storing all the job frequencies
        
        for(auto x : tasks) // assinging the values in the map
        {
            mp[x]++;
        }
        
        int count=0;  //initializin the count to zero for holding the rounds needed 
        
        for(auto x : mp) // itterating the map and performing the operation for the overall frequencies of the tasks 
        { 
            if(x.second==1)
                return -1;  // if the frequency is 1 then we return -1
            
            if(x.second%3==0)  //  if the task frequency lies in 3x+2y and is divisible by 3 then y=0 to minimize count so we                                    add count+=x.second/3 making y=0
            {
                count+=x.second/3;
            }
            else{                // else we take the stuff and divide it by 3 and add 1 to manage overall equation in terms                                       of 2
                count+=(x.second/3)+1;
            }
            
            
        }
        
        return count;   // returning the final count
    }
};