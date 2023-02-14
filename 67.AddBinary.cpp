#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
string addBinary(string a, string b) {
     
     int i=a.size()-1;  //taking the last index of the string a
     int j=b.size()-1;  //taking the last index of the string b
     int carry=0;       //taking the carry as zero initially 
     string ans="";     //taking the empty answer holding string
     while(i>=0 || j>=0) //looping through the entire length of the string a
     {
         int a_digit=i>=0? a[i--]-'0': 0;  // taking the a string last digit and checking if the last element is zero or not and if so we convert it to decimal by subtacting '0' ASCI from the char 
         int b_digit=j>=0? b[j--]-'0': 0;  // taking the b string last digit and checking if the last element is zero or not and if so we convert it to decimal by subtacting '0' ASCI from the char 
         int sum=a_digit+b_digit+carry;  //adding the a's last digit and b's last digit along with the carry
         ans.insert(ans.begin(),sum%2+'0'); //now appending the last element sum to the ans string by taking the binary [%2] and the converting it to decimal by adding + '0'
         carry=sum/2; // making the carry as sum/2 to take if it is devisible by 2 
     }
    
     if(carry) // if an additional carry of 1 exists after adding 1+1 so that it becomes 10 so taking 1 as carry and putting 0 as answer so that 1 gets appended at the beginning
     {
         ans.insert(ans.begin(),'1');
     }
     
     return ans; // finally returning the ans string
    
    }
};