#include<bits/stdc++.h>
using namespace std;


struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    
    TreeNode *construct(int i, int j, vector<int>&v)
    {
        
        if(i>j)   // checking if the value of i greater than j
            return NULL; // if so then NULL is returned
        
        int mid=i+(j-i)/2; //taking the mid value of the passed length of the vector
        
        TreeNode *root=new TreeNode(v[mid]); //taking a new treenode of the value made of the mid element in the vector
        
        root->left=construct(i,mid-1,v); //taking the left values in the left of the made node ie the smaller values in the left by calling the recursive function
        
        root->right=construct(mid+1,j,v); //taking the left values in the left of the made node ie the smaller values in the left by calling the recursive function
        
        return root; //finally returning the values while traversing back
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> v;   //vector for converting the list to vector 
        
        while(head) // heaif turns NULL travelling till last it'll stop
        {
            v.push_back(head->val); // storing the value of the list nodes
            
            head=head->next; // traversing the head one by one
        }
        
        int i=0,j=v.size(); // taking i as the 0th index and j as the last index therefore size of vector considered;
        
        return construct(i,j-1,v); // running the recursive function constructing the binary tree
        
    }
};