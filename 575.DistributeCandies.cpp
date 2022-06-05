#include<bits/stdc++.h>
using namespace std;
int distributeCandies(vector <int> candyType)
{
    unordered_set <int> maxCandiesType;
    for(int i=0;i<candyType.size();i++)
    {
        maxCandiesType.insert(candyType[i]);
    }

    return min(maxCandiesType.size(),candyType.size()/2);
}

int main()
{   
    vector <int> candyType;
    int inp;
    cout<<"Enter the candy types : "<<endl;
    while(cin>>inp)
    candyType.push_back(inp);
    cout<<distributeCandies(candyType)<<endl;
    return 1;
}