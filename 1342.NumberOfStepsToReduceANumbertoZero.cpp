#include<iostream>
using namespace std;
bool isEven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int num,count=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    while(num)
    {
        if(isEven(num))
            num/=2;
        else
           num-=1;
           count++;
    }

    cout<<count<<endl;
}

