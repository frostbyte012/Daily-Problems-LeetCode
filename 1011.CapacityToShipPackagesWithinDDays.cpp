#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool check(vector<int>& weights, int days, int capacity)
    {
        
        
        int current_weight=0; // the current weight that needs to taken zero before adding up 
        
        int required_days=1; // the required days that needs to be taken atleast 1 before answering 
        
        for(auto x : weights)// for iterating in weights before adding up the required days and comparing it with the capacity 
        {
            if(current_weight+x>capacity) //current weight gets updated by x, and after that if its greater than capacity we update and increase the days and current weight becomes zero
            {
                required_days++;
                
                current_weight=0;
            }
            
            current_weight+=x; // else the current weight gets updated by the elements
        }
        
        if(required_days>days) // required days on being greater than days we return false
            
            return false;
        
        return true; // else we return true
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left=0; //  we take left as zero since it'll take the largest number 
        
        int right=0; // we take right as zero which will take the total sum
        
        int ans; // it'll take the ans
        
        for(auto x : weights) // x itterates storing the answer in the left 
        {
            left=max(left,x); // left stores the largest answer
            
            right+=x; // right gets summed up out of all the elements in weights
        }
        
        while(left<=right) // if left is smaller than the total sum we keep on iterating until optimal days recieved
        {
            int mid=(left+right)/2; // mid takes the middle value of all the smallest and the largest sum 
            
            if(check(weights,days,mid)) // checks whether the number lies int he range less than or greater than the mid
            {
                ans=mid; // stores answer taking the mid value
                
                right=mid-1; // and shortens the list by searching on the smaller side
            }
            
            else
            {
                left=mid+1; // else searches on the right side that is the bigger half
            }
            
        }
        
        
        return ans; // finally returns the answer
        
    }
};