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
    
    int sumNumbers(TreeNode* root,int sum=0)
    {
        if(!root) // check if the root is empty or not for being null 
            return 0;
        
        sum=(sum*10)+(root->val); // take out the digit number from root till end child
        
        if(!root->left && !root->right) // check if the root's left and right not empty if so we return the digit made till there for sum
            return sum;
        
        return sumNumbers(root->left,sum)+sumNumbers(root->right,sum); // check same for the left and right side
    }
    
};