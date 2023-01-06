#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        //edge case checking if there are list of costs of the icecreams
        if(costs.size()==0)
            return 0;
        
        int icecreams=0; //initializing the number of icecreams as 0
        
        sort(costs.begin(),costs.end()); // sorting the costs array for taking out the min number of costs 
        
        if(coins<costs[0]) // checking if enough coins are there for even buying the cheapest icecreams
            return 0;
        
        for(auto x : costs) //looping and checking
        {
            if(x<=coins)  // if there are enough coins 
            {
                coins-=x; // we subract the amount from the coins
                icecreams++; // we increase the icecream bought
            }
        }
        
        return icecreams; // returning the maximum number of icecreams
        
    }
};