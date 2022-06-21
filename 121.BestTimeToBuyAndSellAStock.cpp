#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum=INT_MAX,maxProfit=0,i;
        
        for(i=0;i<prices.size();i++)
        {
            minimum=min(minimum,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minimum);
        }

        return maxProfit;
        
    }
};

