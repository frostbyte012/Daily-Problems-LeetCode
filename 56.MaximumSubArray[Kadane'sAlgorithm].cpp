#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int i,maxsum=INT_MIN,currsum=0;
    for(i=0;i<nums.size();i++)
        {
            currsum=currsum+nums[i];
            if(currsum>maxsum)
               maxsum=currsum;
            if(currsum<0)
               currsum=0;
        }
    return maxsum;
}

int main()
{
    int i,inp;
    vector<int> nums;
    cout<<"Enter the numbers  :"<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    cout<<"The Maximum Sub array Sum : "<<maxSubArray(nums)<<endl;
    return 1;
}