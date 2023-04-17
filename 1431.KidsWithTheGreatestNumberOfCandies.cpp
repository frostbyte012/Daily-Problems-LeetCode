#include<bits/stdc++.h>

using namespace std;

class Solution {

public:

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     
        vector<bool>result; // vector will be holding the result
        
        int maximumElement=(int)*max_element(candies.begin(),candies.end()); // storing the maximum element of the array 
       
        for(int i=0;i<candies.size();i++) // itterating the loop
        {
            if(candies[i]+extraCandies>=maximumElement) // checking if the current element + extra candies is greater or than or equal to the maximum element
            {
                result.push_back(true); //storing the results
            }
            else
            {
                result.push_back(false); //storing the resluts for false conditions if ith candies + extra candies sum < maximum element of the array
            }
        }
        
        return result; // finally returning the result
    }
}