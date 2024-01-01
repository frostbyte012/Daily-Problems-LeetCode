#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //using greedy technique to solve the following problem 
        sort(g.begin(),g.end()); //sort both the children and the cookies array
        sort(s.begin(),s.end());
        int sm=0,l=0,ans=0; //make the two pointers ready 
        
        while(sm<g.size() && l<s.size()) // run till either of the array exhausts
        {
            if(g[sm]<=s[l]) // check if the greed of sm'th children of g is full filled by the l'th cookie in the s
            {
                ans++; // if so increase the count 'ans++'
                sm++; // also move the sm pointer forward for the next child
            }
            l++; //check the next cookie size in s by moving the lth pointer next
        }

        
        
        return ans; // return the answer
    }
};