#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector <int> & nums)
{
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==nums[i+1])
              return 1;
       }  
       return 0;
}

int main()
{
    int inp;
    vector<int> nums;
    cout<<"Enter the elements : "<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    cout<<containsDuplicate(nums)<<endl;
    return 1;
}