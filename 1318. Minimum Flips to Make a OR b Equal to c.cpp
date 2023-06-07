# include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        //storing the number of flips required to change the bits
        int flips=0;
        
        while(a>0 || b>0 || c>0)
        {
            //storing the last digit of A into bitA
            int bitA=a&1;
            //storing the last digit of B into bitB
            int bitB=b&1;
            //storing the last digit of C into bitC
            int bitC=c&1;
            
            //Checking if the bitwise or of bitA and bitB is equal to bitC, if not then we
            if((bitA | bitB )!= bitC)
            {
                //check if bitC is equal to 1 we sum the number of flip by one since if bitA or bitB is operated by single bitwise OR either of them needs to be 1 to make bitC 1 so adding them 1 time makes flips justified
                if(bitC==1)
                    flips++;
                //else it shows that either bitA and bitB is equal to 1 and 1 or 0 and 1 hence we add their original state to flips to make it justified
                else 
                    flips+=(bitA+bitB);
            }
            
            //finally right shifting a
            a>>=1;
             //finally right shifting b
            b>>=1;
             //finally right shifting c
            c>>=1;
            
            
        }
        
        // when done ultimately return flips
        
        return flips;
        
    }
};

