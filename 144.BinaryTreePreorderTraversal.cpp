#include<bits/stdc++.h>
using namespace std;


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
    
    vector<int>ans; // taking a global vector variable ans 
    
    void fun(TreeNode* root)
    {
        if(root) //checking if the root is not null
        {
            ans.push_back(root->val); // first storing the value in the order of preorder traversal : RLR(root->left->right)
            fun(root->left); // following left child
            fun(root->right); // following right child
        }
    }
    
    vector<int>preorderTraversal(TreeNode* root) {
        fun(root); // calling the function for a recursive approach
        return ans; // finally returning the ans;
    }
    
};