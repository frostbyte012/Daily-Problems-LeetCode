#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
               //For fast I/O in C++
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
       int n=nums.size(),count=0,currsum=0,i=0;
       unordered_map<int,int> mymap ;
        
       while(i<n)
       {
           currsum+=nums[i];
           
           if(currsum==k)
           {
               count+=1;
           }
           
           if(mymap.find(currsum-k)!=mymap.end())
           {
               count+=mymap[currsum-k];
           }
           
           
           i+=1;
           
           mymap[currsum]+=1;
           
       }
        
        return count;
    }
};