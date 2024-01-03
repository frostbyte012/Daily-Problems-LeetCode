#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int start=0,n=gain.size(); // the variables to start the insertion and int n for size of gain
        
        vector<int>ans; // ans to store the answer
        
        ans.push_back(start); // to store the initial start zero
        
        for(auto x : gain) // finally we start looping through the gain vector
        {
            start+=x; // where the start updates itself with respect to the elements of the gain vector
            
            ans.push_back(start); // eneters the updated heights at each ith level
        }
        
        sort(ans.begin(),ans.end()); // sorting the answer vector as per the height
        
        return ans[n]; // returning the last highest height
        
    }
};