#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
vector<int> twoSum(vector<int> &numbers,int target)
{
    vector<int> targetArray;
    int start=0,end=numbers.size()-1,sum;
    while(start<end)
    {
       sum=numbers[start]+numbers[end];
       if(sum==target){
           targetArray.push_back(start+1);
           targetArray.push_back(end+1);
           return targetArray;
       }
       else if(sum<target){
           start++;
       }
       else{
           end--;
       }
    }

    return {};
  }
};

int main()
{
    int nums,target;
    vector<int> numbers,targetArray;
    cout<<"Enter the elements :"<<endl;
    while(cin>>nums)
    {
        numbers.push_back(nums);
    }
    cout<<"Enter the target"<<endl;
    cin>>target;
    Solution solution;
    targetArray=solution.twoSum(numbers,target);
    for(int i=0;i<targetArray.size();i++)
    {
        i==targetArray.size()-2?cout<<targetArray[i]<<" , ":cout<<targetArray[i]<<" ";

    }
    cout<<endl;
    return 1;
    
}