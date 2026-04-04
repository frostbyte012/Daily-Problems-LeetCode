#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {

        if(encodedText.empty())
            return encodedText;

        int n=encodedText.size();

        int cols=(n+rows-1)/rows; // formula for ceil function

        // cout<<cols<<endl;
        
        string str;

        for(int begin=0;begin<cols;begin++)
        {
            int r=0,c=begin;

            while(r<rows && c<cols)
            {
                str+=encodedText[r*cols+c];
                r++;
                c++;
            }
        }

        while(!str.empty() && str.back()==' ')
           str.pop_back();


        return str;
        
    }
};