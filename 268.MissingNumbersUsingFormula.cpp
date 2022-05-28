#include<bits/stdc++.h>
using namespace std;

int missingNumbers(vector <int> &nums)
{
    return(nums.size()*(nums.size()+1))/2 - accumulate(nums.begin(),nums.end(),0); 
}

int main()
{
    int inp;
    vector <int> nums;
    cout<<"Enter non int to terminate."<<endl;
    cout<<"Enter the numbers : "<<endl;
    while(cin>>inp)
        nums.push_back(inp);
    cout<<missingNumbers(nums)<<endl;
    return 1;
}

//Formula for finding the missing number : (n*(n+1))/2 - sum(vec) n=vec.size()