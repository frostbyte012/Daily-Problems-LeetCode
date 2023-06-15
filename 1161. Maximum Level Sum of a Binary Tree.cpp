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
    int maxLevelSum(TreeNode* root) {
        
        int maxsum=INT_MIN,ans=1,level=1;  // here we take the max sum to be the INT_MIN so taht we can generate sum greater than that at our levels, taking ans and level as 0 to return the particular level having the maximum sum
        
        queue<TreeNode*>q; // further we create a queue to stire all the nodes of a particular level
        
        q.push(root);// initially we push the first root; 
        
        
        while(!q.empty()) // seeing that the queue is not empty; this loop travels all the level
        {
            
           int sumOfLevel=0; // we make the sum zero initially for the particular level
            
           for(int i=q.size();i>0;i--) // this loop runs all elements of the particular level stored by the queue
           {
                  TreeNode* node = q.front(); // takin the first element of the queue representing the first node of the level
            
                  q.pop(); // we pop that particular node once traversed
               
                  sumOfLevel+=node->val; // taking sum of the val of current traversed the node
               
                  if(node->left!=NULL) // we push the node's next left element making future levels
                      q.push(node->left);
               
                  if(node->right!=NULL) // we push the node's next right element representing future levels
                      q.push(node->right);
           }
              
            if(maxsum<sumOfLevel)
            {
                // we check if the max sum is greater than the Sum Of Current Level or not
                maxsum=sumOfLevel;  // if not we make the max sum equal to sumOfLevel
                ans=level; // if not then we pass the ans the level
            }
            
             ++level; // we increase the level
        }
        
        return ans;    //returning the ans once all the levels have been travelled;
        
    }
};