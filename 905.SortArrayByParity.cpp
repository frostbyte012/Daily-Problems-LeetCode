#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
        
    stack <int> s1,s2;
    int i,j;
        for(i=0;i<nums.size();i++)
        {
            if(isOdd(nums[i]))
               s1.push(nums[i]);
            else
               s2.push(nums[i]);    
        }
        for(i=0;!s2.empty();i++)
        {
            nums[i]=s2.top();
            s2.pop();
        }
        for(j=i;!s1.empty();j++)
        {
            nums[j]=s1.top();
            s1.pop();
        }
        
        
return nums;
                   
}
                  
   bool isOdd(int a)
    {
        if(a%2==0)
            return 0;
        else
            return 1;
    }


  int main()
  {
      vector <int> nums={3,1,2,4},res;
      res=sortArrayByParity(nums);
      return 0;
  }
