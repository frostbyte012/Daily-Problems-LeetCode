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

    //custom 1d and 2d array declared

    void dfs(TreeNode* root,int current_sum,int targetSum)
    {
        // actual working function that is required to make the traversal
        
        if(root==NULL)
        { //if the root is empty it returns nothing and stops recursion
            return;
        }
        
        curr.push_back(root->val);
        //curr vector takes the val of the current root
        current_sum+=root->val;
        //current_sum var takes the sum of the val of the current root
        if(root->left==NULL && root->right==NULL)
        {//if the left and right child of the root of the TreeNode is empty then current sum is compared with targetSum 
            if(current_sum==targetSum)
            {//if same then we reach our end where the sum is equal and we store the curr 1d vector into the 2d vector
                res.push_back(curr);
            }
        }
        dfs(root->left,current_sum,targetSum);
        //dfs preorder traversal for the left side of the root [recursion] 
        dfs(root->right,current_sum,targetSum);
        //dfs preorder traversal for the right side of the root [recursion]
        curr.pop_back();
        //removing the rest of the element if they are not equal to the targetSum after left and right traverse of the root nodes
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) { 
        //main function where dfs is called
       dfs(root,0,targetSum);
       //returning the 2d array having the respective collection of 1d arrays having the elements whose sum is equal to targetSum
       return res;
    }
};