#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
            if(i!=nums[i])
                return i;
    }

    return nums.size();
}

int main()
{
    int inp;
    vector<int> nums;
    cout<<"Enter non integer to terminate"<<endl;
    cout<<"Enter the numbers : "<<endl;
    
    while(cin>>inp)
         nums.push_back(inp);
    cout<<missingNumber(nums)<<endl;
    return 1;
}