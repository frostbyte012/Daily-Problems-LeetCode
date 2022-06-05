#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    unordered_set <int> duplicate;
    for(int i=0;i<nums.size();i++)
        duplicate.insert(nums[i]);
    if(nums.size()==duplicate.size())
       return 0;
    else 
       return 1;
}

int main()
{
    vector <int> nums;
    int inp;
    cout<<"Enter the elements in the Array :"<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    cout<<containsDuplicate(nums);

}