#include<bits/stdc++.h>
using namespace std; 


class Solution {

//Try commenting struct TreeNode out, this TreeNode* was customly declared to make my local machine compiler work.

struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

public:
    vector<vector<int>>res;
    vector<int>curr;
    void dfs(TreeNode* root,int current_sum,int targetSum)
    {
        if(root==NULL)
        {
            return;
        }
        
        curr.push_back(root->val);
        current_sum+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            if(current_sum==targetSum)
            {
                res.push_back(curr);
            }
        }
        dfs(root->left,current_sum,targetSum);
        dfs(root->right,current_sum,targetSum);
        curr.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) { 
       dfs(root,0,targetSum);
       return res;
    }
};