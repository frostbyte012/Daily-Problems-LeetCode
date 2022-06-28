#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> mergedIntervals;
        vector<int> tempInterval;
        if(intervals.size()==0)
        {
            return mergedIntervals;
        }
        
    
        
        tempInterval=intervals[0];
        
        for(auto it : intervals)
        {
            if(it[0]<=tempInterval[1])
            {
                tempInterval[1]=max(tempInterval[1],it[1]);
            }
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval=it;
            }
        }
        
        mergedIntervals.push_back(tempInterval);
        
        return mergedIntervals;
    }
};