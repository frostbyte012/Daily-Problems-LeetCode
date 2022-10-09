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

    unordered_set<int> s;
    
    void inorder(TreeNode* root, int &k, bool &ans) {
        if(!root)   return;
        
        inorder(root->left, k, ans);
        
        if(s.find(k-root->val) != s.end()) {
            ans = true;
        }
        s.insert(root->val);
        
        inorder(root->right, k, ans);
    }
    
    bool findTarget(TreeNode* root, int k) {
        bool ans = false;
        inorder(root, k, ans);
        return ans;
    }
};