#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        return ceil(log(buckets)/log((minutesToTest/minutesToDie)+1));
        
    }
};

//Helper Video
// https://www.youtube.com/watch?v=Vs3SG4nqwnk&t=579s