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
    
    vector<int>ans;
    
    void inOrderTraversal(TreeNode* root) 
    {
        
        if(root==NULL) // checking if the root element is NULL then we return and stop further recursion of it and move onto the next child
            return;
        
        if(root->left!=NULL) // checking the root left if empty or not because Inorder traversal of a binary tree is : Left->Root->Right : So naturally it'll be ascending
        {
            inOrderTraversal(root->left); 
        }
        
        ans.push_back(root->val); // store the value of each root until left is empty and then move to the right
        
        if(root->right!=NULL) // checking if the last child's right is empty or not if not then going for the right child
        {
             inOrderTraversal(root->right); //traversing the right till the last child in the right sub
        }
        
        return; //ending when left right both are empty  
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        inOrderTraversal(root); // Inorder traversing of the Binary Search Tree
        
        return ans; // finally returning the ans
        
    }
};
