#include<bits/stdc++.h>
using namespace std;

class Solution {
    
    
public:
   static bool check(string &s1, string &s2)
    {
        return (s1+s2)>=(s2+s1);
    }
    
public:
    string largestNumber(vector<int>& nums) {
        
        int count=0;
        
        vector<string> numbers;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        
        if(count==nums.size())
            return "0";
        
        for(int i=0;i<nums.size();i++)
        {
            numbers.push_back(to_string(nums[i]));
        }
        
        sort(numbers.begin(),numbers.end(),check);
        
        string s="";
        
        for(int i=0;i<numbers.size();i++)
        {
            s+=numbers[i];
        }
        
        
        return s;
        
    }
};