#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int>     dp(n + 1, (int) 1e9);
        int             i, j;

        i = 0;
        dp[0] = 0;
        while (++i < n + 1)
        {
            j = 1;
            while (j * j < i + 1)
                dp[i] = min(dp[i], dp[i - j * j++] + 1);
        }
        return dp[n];
    }
};