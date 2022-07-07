#include<bits/stdc++.h>
using namespace std;

class Solution {
    
    
public:
    
     vector<vector<int>> result;
    
     vector<int> combination;
    
     vector<vector<int>> combine(int n, int k) {
        
        backtracking(1,n,k);
         
        return result;
        
    }
    
    void backtracking(int start,int n,int k)
    {
        
        if(combination.size()==k)
        {
            result.push_back(combination);
            return ;
        }
        
        for(int i=start;i<=n;i++)
        {
            combination.push_back(i);
            backtracking(i+1,n,k);
            combination.pop_back();
        }
        
    }
};