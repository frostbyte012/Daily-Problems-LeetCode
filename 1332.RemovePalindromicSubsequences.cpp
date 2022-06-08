#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
bool isPalindrome(string s)
{
    string palindrome="";
    for(int i=s.length()-1;i>=0;i--)
    {
        palindrome+=s[i];
    }
    if(palindrome==s)
    {
        return 1;
    }
    else{
        return 0;
    }

}

public:
int removePalindromeSub(string s)
{
    if(isPalindrome(s))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
};

int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    Solution solution;
    cout<<solution.removePalindromeSub(s)<<endl;
    return 1;
}