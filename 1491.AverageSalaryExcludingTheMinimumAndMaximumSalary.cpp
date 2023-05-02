#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        
        sort(salary.begin(),salary.end());
        
        salary[0]=0;
        salary[salary.size()-1]=0;
        
        long long int sum=0;
        
        for(auto x : salary)
        {
            sum+=x;
        }
        
        return (double)sum/(salary.size()-2);
        
    }
};