#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        
        unordered_map<char,int>mp; //map for storing the frequency of the elements
        
        int sub=0,iter=0; // here the sub is the count of the size of the substring, and iter iterates the length of the string
        
        
        while(iter<s.size()) // while iterating the entire string
        {
            if(mp.find(s[iter])!=mp.end()) // we check if the particular string elements occurs already in the map or not if so we clear the map, increase the sub number and then input the char into the map
            {
                mp.clear();
                sub++; 
                mp[s[iter]]++;
                
            }
            else
            {
                mp[s[iter]]++;   // else we keep on inserting the char into the map
            }
            
            iter++; // moving the iterator over the string
        }
        
        if(mp.size()!=0) // if map size aint zero .. it means a last character is left in the string ie: abc|ac|ab|bc|b for b in the last index/the leftout character we increase the substring size sub++
            sub++;
        
        return sub; //finally returning the sub
        
    }
};