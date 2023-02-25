#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum=INT_MAX,maxProfit=0,i; // declaring the minimum INT_MAX as the minimum val and maxProfit as the maximum Profit that can be made, initialzed to zero plus also we took i as the iterator
        
        for(i=0;i<prices.size();i++) // itterating the value as i and we move on checking the value of the stocks
        {
            minimum=min(minimum,prices[i]); // minimum stores the value from the iteration of the elements having the min element 
            maxProfit=max(maxProfit,prices[i]-minimum); // maxProfit stores the max profit made taking the maxprofit and max difference of the ith element and the minimum val collected before
        }

        return maxProfit; // return the maxProfit made
        
    }
};
