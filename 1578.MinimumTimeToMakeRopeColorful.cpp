#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        stack<pair<char,int>> stk;
        int ans =0;
        
        for(int i=0;i<colors.size();i++){
            if(stk.size() == 0){
                stk.push({colors[i],neededTime[i]});
            }
            else
            {
                pair<char, int> top = stk.top();
                if(top.first == colors[i]){
                    if(top.second < neededTime[i]){
                        
                        ans += top.second;
                        stk.pop();
                        stk.push({colors[i],neededTime[i]});
                    }
                    else{
                        ans += neededTime[i];                        
                    }
                }
                else{
                    stk.push({colors[i],neededTime[i]});
                }
            }   
        }
        
        
        return ans;
    }
};