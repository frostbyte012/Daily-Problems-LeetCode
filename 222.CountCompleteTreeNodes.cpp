#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

    int countNodes(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        int a=countNodes(root->left);
        
        int b=countNodes(root->right);
        
        return a+b+1;
        
    }
};