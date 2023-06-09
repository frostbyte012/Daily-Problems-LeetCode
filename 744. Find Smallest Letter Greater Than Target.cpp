#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    char binary(vector<char>& letters, char target,int si,int ei)
    {
        if(si==letters.size()) // checking the base condition if the starting index is exceeding the last index indicating the element not found
            return letters[0]; // then we return the starting element of the list as per the given condition of the question
        
        if(si>ei) // checking if the starting element exceeds the ending element in between or not which states that the element desired is found ie the element just bigger than the target is found 
        {
            return letters[si]; // that should be the element at the starting index bigger than the target
        }
        
        int mid=ei-(ei-si)/2; // finding the mid element using the formula ending index - (ending index - starting index)/2
        
        if(letters[mid]>target) // checking if the mid element is bigger than the target if so then we pass the left subvector 
            return binary(letters,target,si,mid-1);
                                                                                                                                                                             
        //if the program reaches here that means all the previous conditions failed hence
        //the mid element is smaller than the target if so then we pass the right subvector
        return binary(letters,target,mid+1,ei);
        
        
    }
    
    char nextGreatestLetter(vector<char>& letters, char target) {
        
          //taking the character ans for the final output 
          char ans=binary(letters,target,0,letters.size()-1);
          //returning the ans
          return ans;
        
    }
};