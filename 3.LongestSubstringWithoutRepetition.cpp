#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lengthOfLongestSubstring(string s)
      {
            int start=0,end=0,maxLen=0;
            unordered_map<char,int> freq;
            while(end<s.length()-1)
            {
                freq[s[end]]++;
             
                while(freq[s[end]]!=1)
                {

                      freq[s[start]]--;
                      start++;

                }

            maxLen=max(maxLen,end-start+1);
            end++;


            }
         
         return maxLen;
      

      }
};

int main()
{
    string s;
    cout<<"Enter the String "<<endl;
    cin>>s;
    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s)<<endl;
    return 1;c
}