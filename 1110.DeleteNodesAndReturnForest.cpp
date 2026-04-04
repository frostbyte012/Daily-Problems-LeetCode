#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
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
    
    vector<TreeNode*>res; // the res stores the resultant forests
    unordered_set<int>st; // stores the nodes to be deleted and finds them in O(1)
    
    void delete_traversal(TreeNode *&root)
    {

        if(root) // valid Node
        { 
            delete_traversal(root->left); // traverses the left side of the node
            delete_traversal(root->right);// traverses the right side of the node
            if(st.find(root->val)!=st.end()) // finds the root's val out of the to_delete
            {
                if(root->left) // checks if the root's left has no NULL
                res.push_back(root->left); // is so push it in the res as forest
                if(root->right) // is so push it in the res as forest
                res.push_back(root->right);// checks if the root's right has no NULL
                root=NULL;  //make the root NULL
                delete root; // delete the root
            }
        }
            
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        
        for(auto ele : to_delete) // traverse and store the elements in the root
            st.insert(ele);
        
        delete_traversal(root); // delete the to_be_deleted elements by calling the delete_traversal
        
        if(root) // if root still exists then push it as forest into the res
           res.push_back(root); 
        
        
         return res; // return the res
    }
};