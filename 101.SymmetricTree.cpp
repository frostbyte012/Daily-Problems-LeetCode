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
    
    bool helper(TreeNode* left,TreeNode* right)
    {
        if(!right and !left) //checking if the root's left and right are NULL if so we say it symmetric
            return true; 
        
        
        // Three conditions make the tree asymmetric 
        // 1. If left is NULL and right is not
        // 2. If right is NULL and left is not
        // 3. If the val of left doesn't match right
        
        if((!left && right!=NULL) || (!right && left!=NULL) || (left->val!=right->val))
            return false;
        
        // further we check on until we reach the equal symmetric end of the right and left for mirror structure
        
        if(right->val == left->val)
            return helper(left->right,right->left) && helper(left->left,right->right);
            
            
        //we return true for the base condition
        return true;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(!root)  //checking if the root is NULL if so we say it symmetric
            return true;
        
        return helper(root->left,root->right); //checking further for root's left and right in helper func
    }
};