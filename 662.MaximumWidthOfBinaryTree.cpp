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
    int widthOfBinaryTree(TreeNode* root) {
        
        
        long long int ans=0; // storing the answer for the largest width of each level 
        
        queue<pair<TreeNode*,int>>q; // storing the q pair elements for tree node along with the index 
        
        q.push({root,0}); // first inserting the root of the tree
        
        while(!q.empty()) // checking if the tree ain't empty
        {
            long long int l=q.size(); // storing the size of the queue into the l
            
            long long int la=q.back().second,f=q.front().second; // storing indices of the last and first element of the queue
            
            for(int i=0;i<l;i++) // looping of each of the element [element of that level] stored into the queue
            {
                TreeNode * temp=q.front().first; // storing the first element into the temp node
                
                long long int indx=q.front().second; // storing the index of that temp node
                
                q.pop(); // now slowly popping the element
                
                if(temp->left!=NULL) q.push({temp->left,indx*2+1}); // for the stored element we check if the left element exist and store them into the q
                
                if(temp->right!=NULL) q.push({temp->right,indx*2+2});// for the stored element we check if the lright element exist and store them into the q
            }
            
            ans=max(ans,la-f+1); //storing the max of the ans and the difference between the last and the first element index from the queue
            
        }
        
        return ans; //  ultimately returning the ans
    }
};