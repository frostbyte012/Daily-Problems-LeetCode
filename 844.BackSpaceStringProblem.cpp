/**
 * @file 844.BackSpaceStringProblem.cpp
 * @author Deepraj Majumdar (tech.frostbyte.dev@gmail.com)
 * @brief
 * Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".

Constraints:

1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.



 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<bits/stdc++.h>
using namespace std;

    bool backspaceCompare(string s, string t) {
        
     int i;
     stack <char> ss,tt; //declares two stacks
     for(i=0;i<s.length();i++)
     {  // for length of the string
         if(s[i]=='#')
         {  //checking if the stack is not empty
             if(!ss.empty())
             //if not then the previous element gets popped
               ss.pop();
         }
         else
         // else the element gets added to the stack
           ss.push(s[i]);
     }

//same fundamental approach here as well
     for(i=0;i<t.length();i++)
     {
         if(t[i]=='#')
           {
               if(!tt.empty())
                   tt.pop();
           }
        else
            tt.push(t[i]);
     }
                  
if(ss==tt)
//comparing if the stacks are same or not and returns true or false
   return 1;
else
   return 0;
        
}

    int main()
    {
        string s,t;
        cin>>s>>t;
        cout<<backspaceCompare(s,t)<<endl;
    }