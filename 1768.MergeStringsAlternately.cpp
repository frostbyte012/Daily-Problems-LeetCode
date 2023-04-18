#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string str=""; //str to store the answer 
        
        int length=word1.size()>word2.size()?word1.size():word2.size(); // length to store the size of the largest sized string
        
        for(int i=0;i<length;i++) // to itterate through the strings and take the characters
        {
            if(i<word1.size()) // if the size of the word 1 do not ends we keep on entering the characters
            {  
                  str.push_back(word1[i]); 
            }
            if(i<word2.size()) // if the size of the word 2 do not ends we keep on entering the characters
            {
                 str.push_back(word2[i]);
            }       
        }
        return str; //finally return the string 
    }
};