#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        if(islower(word[0])) 
        { 
            //case 1 : if the word starts with lowercase letter then we'll see if any uppercase exists or not
            
            for(auto x: word)
            {
                if(isupper(x))
                    return false;
            }
        }
        
        if(isupper(word[0]) && word.length()>1)
        {
            //case 2 : If the word starts with uppercase letter then we'll search for 2 possible subcases again
            
            if(islower(word[1]))
            {
           //case 2.1: If the 2nd char of the word starts with lowercase char then we have to search if any uppercase exists
                
                for(int i=2;i<word.length();i++)
                {
                    if(isupper(word[i]))
                        return false;
                }
            }
            
            else if(isupper(word[1]))
            {
           //case 2.2: If the 2nd char of the word starts with uppercase char then we have to search if any lowercase exists

                for(int i=2;i<word.length();i++)
                {
                    if(islower(word[i]))
                        return false;
                }
            }
            
        }
        
        //else all the cases solves and we finally see the usage of capitals in it is right!
        
        return true;

        
    }
};