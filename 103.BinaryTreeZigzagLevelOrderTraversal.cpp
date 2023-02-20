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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans; // taking a 2D vector and for storing the answer
        
        queue<TreeNode*>q; // making a queue to store the elements at different heights individually
        
        if(root==NULL) // if the root is NULL then we retuen blank ans 
            return ans;
        
        q.push(root); // pushing the root in queue
        
        bool f=false; // declaring the f as false for altering the sequence in the level order traversal
        
        while(q.size()) // while the size of the queue becomes zero goinf to the last height
        {
            vector<int>temp; // storing the temporary 1D collection of the smae level nodes
            
            int s=q.size(); // storing the queue size
            
            while(s--)
            {
                TreeNode *te = q.front(); // Taking the TreeNode te for storing the front element of the queue
                
                q.pop(); // slowly emptying the queue to start same level storage of the tree 
                
                if(te->right!=NULL) // if the right side is not NULL we push it into the queue
                    q.push(te->right);
                
                if(te->left!=NULL)// if the left side is not NULL we push it into the queue
                    q.push(te->left);
                
                temp.push_back(te->val); // now storing the root value in the temp 
            }
            
            if(f) //if the f value is true it alters f to false and pushes temp vector to ans
            {
                ans.push_back(temp);
                f=false;
            }
            
            else //if the f value is false it alters f to true and pushes temp vector to ans and reverses the temp vector before adding to ans
            {
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                f=true;
            }
            
        }
        
        return ans; // finally returning the ans
        
    }
};