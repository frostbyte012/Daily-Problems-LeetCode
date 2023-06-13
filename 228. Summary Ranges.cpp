#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        
      int end=0,start=0,n=nums.size();
      string ans=""; // for storing the subarrays range
      vector<string>answer; // for storing the final answer
        
            for(int i=0;i<n;i++) //loopin the entire array
            {

              int j=i; //setting pointer j for additional work of indexing

                  while(j+1<n && nums[j]+1==nums[j+1] ) // running a while loop to get to the range
                      {    
                          j++;  // j passed it's initial value to i and keeps on running till it reaches the range break where jth index value will not be same as it's j+1 th index value
                      }

                  if(j>i) // if j>1 it shows we have a range bigger than that of size 1
                      {
                              ans+=to_string(nums[i]);  //storing the range initial value in the string
                              ans+="->"; // storing the "->" range sign in the string
                              ans+=to_string(nums[j]); // storing the range ending value in the string
                      }

                  else // else we have a range of size 1
                      {
                            ans+=to_string(nums[i]); // else passing the singe sized range to the string
                      }

                  answer.push_back(ans); // finally passing the string ans to the answer array
                  ans=""; // clearing the ans string for a fresh range search
                  i=j; // passing the last checked range value to i so that it can comtitnue searching from jth index as befpre that we have already checked the conditions
                }

      return answer; // finally returning the answer
        
        
    }
};