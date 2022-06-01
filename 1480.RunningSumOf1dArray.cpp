#include<bits/stdc++.h>
using namespace std;

vector <int> runningSum(vector<int> & nums)
{
   int i=0,s=0;
   for(i=0;i<nums.size();i++)
       nums[i]=s=nums[i]+s;
   return nums;
}
int main()
{
    vector <int> nums;
    int i,inp;
    cout<<"Enter the numbers in the vector : "<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    nums=runningSum(nums);
    for(i=0;i<nums.size();i++)
        cout<<nums[i]<<",";
    cout<<endl;
    return 1;
}