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
    void addOneRowRec(TreeNode* root, int val, int depth)
    {
        if(root == 0) {
            return;
        }
        if(depth <= 2) {
            TreeNode* node=new TreeNode(val, root->left, 0);
            root->left=node;
            node=new TreeNode(val, 0, root->right);
            root->right=node;
            
            return;
        }
        addOneRowRec(root->left, val, depth-1);
        addOneRowRec(root->right, val, depth-1);
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            return new TreeNode(val, root, 0);
        }
        addOneRowRec(root, val, depth);
        
        return root;
    }
};