#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        

        priority_queue<pair<int,int>>pq;
        
        //priority queue initilized with pair<int,int> 
        
        vector<int>ans;
        
        //vector for storing the k nearest members
        
        for(int i=0;i<arr.size();i++)
        {
            //here the priority queue will hold the abs|of the diff between x and arr[i]| and map the arr[i]
            
            pq.emplace(make_pair(abs(x-arr[i]),arr[i]));
            
            //keeping the first k elements 
            
            if(pq.size()>k)
                pq.pop();
        }
        
        while(!pq.empty())
        {
            //removing the elements from the p queue and putting them to ans vector
            ans.emplace_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin(),ans.end());
        
        //ultimately sorting the ans vector
        
        return ans;
        
    }
};