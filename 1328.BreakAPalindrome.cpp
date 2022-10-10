#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        string ans = "";
        int n = palindrome.size();
        if(n == 1)
            return ans;
        int i;
        for(i=0 ; i<n ; i++){
            if(palindrome[i] != 'a' && i != (n)/2){
                palindrome[i] = 'a';
                break;
            }
        }
        if(i == n && palindrome[n-1] == 'a')
            palindrome[n-1] = 'b';
        
        return palindrome;
        
    }
};
