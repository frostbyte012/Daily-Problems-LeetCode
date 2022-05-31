#include<bits/stdc++.h>
using namespace std;

bool hasAllCodes(string s, int k)
{
    int i=0;
    if(s.length()<k)
        return 0;
    unordered_set <string> unique_sub_str;
    for(i=0;i<=s.length()-k;i++)
        unique_sub_str.insert(s.substr(i,k));
    return unique_sub_str.size()==pow(2,k);
}

int main()
{
    int k;
    string s;
    cout<<"Enter the string and the size of the binary bits length."<<endl;
    cin>>s;
    cin>>k;
    cout<<hasAllCodes(s,k)<<endl;
    return 1;
}
