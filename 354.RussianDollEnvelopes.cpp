#include<bits/stdc++.h>
using namespace std;
int maxEnvelopes(vector<vector<int>> & envelopes)
{
            vector<int> dp;
        int i,j,count=0;
        
        for(i=0;i<envelopes.size()-1;i++)
        {
            for(j=0;j<envelopes.size()-i-1;j++)
            {
                if(envelopes[j][0]>envelopes[j+1][0])
                {
                         swap(envelopes[j],envelopes[j+1]);
                }
            }
        }
        
        // for(i=0;i<envelopes.size();i++)
        // {
        //     for(j=0;j<envelopes[0].size();j++)
        //         cout<<envelopes[i][j]<<" ";
        //         cout<<endl;
        // }
            
        dp=envelopes[0];
        for(i=0;i<envelopes.size();i++)
        {
            if(dp[1]<envelopes[i][1] && dp[0]<envelopes[i][0])
            {
                dp=envelopes[i];
                count++;
            }
        }
        
        return count;
}

int main()
{   
    vector<vector<int>> vec ={{5,4},{6,4},{6,7},{2,3}};
    cout<<maxEnvelopes(vec)<<endl;
    return 0;
}