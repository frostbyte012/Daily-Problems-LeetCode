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
    bool isCompleteTree(TreeNode* root) {
        
        if(!root)
            return true; // checking if the root is empty/null if so we return true
        
        queue<TreeNode*>Q; // taking a queue for checking individual levels of the tree
        
        bool f=false; // using f as a check
        
        Q.push(root); // finally we push the level 1 [root] into the Q
        
        while(!Q.empty()) // checking each level of the queue until its empty
        {
            auto front = Q.front(); // taking the front element
             
            Q.pop(); //popping the front element
            
            if(front->left) // checking if the left exist
            {
                if(f)
                    return false; // else we make it false
                
                Q.push(front->left); // pushing the left
            }
            
            else
                f=true; // else we make it true to terminate
                        
            if(front->right) // checking the right side of the tree
            {
                if(f)
                    return false; // if f earlier true we make it false to maintain the order
                
                Q.push(front->right); // pushing the right element into the queue 
            }
            
            else
                f=true; // else we make f true to terminate in next iteration
        }
        
        
        return true; // if all the hurdles pass we return true confirming the order of binary tree
        
    }
};