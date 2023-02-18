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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL; // checking the root if that is NULL
        swap(root->left,root->right); // swapping the value for left and right
        invertTree(root->left);//inverting and checking the root for left child 
        invertTree(root->right);//inverting and checking the root for right child
        return root;//finally returning the root
    }
};

