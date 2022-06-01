#include<bits/stdc++.h>
using namespace std;
vector <int> runningSum(vector<int> & nums)
{
    int i;
    for(i=1;i<nums.size();i++)
        nums[i]+=nums[i-1];
    return nums;
}

int main()
{
    vector<int> nums;
    int i=0,inp;
    cout<<"Enter The numbers :"<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    for(i=0;i<nums.size();i++)
        i==nums.size()-1?cout<<nums[i]<<endl:cout<<nums[i]<<",";
    return 1;
}