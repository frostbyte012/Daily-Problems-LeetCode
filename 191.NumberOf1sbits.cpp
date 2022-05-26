#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n){

  int count=0;
    while(n)
    {
       if(n%2)
          count++;
       n/=2;
    }
    return count;
}

int main()
{
    uint32_t n;
    cout<<"Enter the bit :"<<endl;
    cin>>n;
    cout<<hammingWeight(n)<<endl;
    return 1;
}

