#include<bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num)
{
    int pick=9;   // Define your pick number here
    if(pick==num)
       return 0;
    else if(pick<num)
       return 1;
    else
       return 1; 
}

class Solution {
public:
    int guessNumber(int n) {
        
        int small=1,large=n;
        
        while(small<=large)
        {
            int mid=small+(large-small)/2;
            int ret = guess(mid);
            if(ret==0)
            {
                return mid;
            }
            else if(ret==-1)
            {
                large=mid-1;
            }
            else
            {
                small=mid+1;
            }
        }
        return -1;
    }
};