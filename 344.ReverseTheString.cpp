#include<bits/stdc++.h>
using namespace std;
vector <int> reverseTheArray(vector <int> & nums)
{
    int i=0;
    for(i=0;i<nums.size()/2;i++)
        swap(nums[i],nums[nums.size()-1-i]);
     return nums;
}
int main()
{
    vector<int>nums;
    int i,inp;
    cout<<"Enter the vector : "<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    nums=reverseTheArray(nums);
    for(i=0;i<nums.size();i++)
     i!=nums.size()-1?cout<<nums[i]<<",":cout<<nums[i];
    cout<<endl;
    return 1;
}