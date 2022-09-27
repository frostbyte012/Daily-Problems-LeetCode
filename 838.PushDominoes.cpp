#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string pushDominoes(string dominoes) {
        
        int l=0,n=dominoes.size();
        
        //Initializing the left pointer l;
        
        for(int r=0;r<n;r++)
        { //taking the right pointer r
            
            if(dominoes[r]=='.')
                continue;
            //case 1 : if r='.' we dont need to do anything
            
            else if((dominoes[r]==dominoes[l])||(dominoes[l]=='.'&&dominoes[r]=='L'))
            {
                //case 2.1 : if l==r ; ie L.....L or R....R then fill it  LLLLLLL or RRRRR
               //case 2.2  : if .....L then LLLLLL
                
                for(int k=l;k<r;k++)
                {
                    dominoes[k]=dominoes[r];
                }
            }
            
            
            else if(dominoes[l]=='L' && dominoes[r]=='R')
            {
                
                
                //case 3 : if L.....R we dont need to do anything
                
            }
            
            
            else if(dominoes[l]=='R' && dominoes[r]=='L')
            {
                
                //case 4 if R.....L
                // if spaces between r and l even then R....L then fill RRRLLL
                // if spaces bwtween r and l odd then R.....L then fill RRR.LLL
                
                int m=(r-l-1)/2;
                for(int k=1;k<=m;k++)
                {
                    dominoes[l+k]='R';
                    dominoes[r-k]='L';
                }
            }
            
            //set the left pointer to right to dynamically update it;
            
            l=r;
            
        }
        
        
        //last case if l has some R left till the end fill R.... to RRRRR
        
        if(dominoes[l]=='R')
        {
            for(int k=l;k<n;k++)
            {
                dominoes[k]='R';
            }
        }
        
        return dominoes;
        
    }
};