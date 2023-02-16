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
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
           return 0; // returning 0 for every root having left and right child empty
        
        int left=maxDepth(root->left); // putting value of left child in the left variable
        
        int right=maxDepth(root->right); // putting value of right child in the right variable
        
        return max(right,left)+1; // returning max of bpth left and right child and adding 1 for root's own height
        
        
    }
};