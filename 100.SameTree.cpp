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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL) // checking if both of the node of the tree is NULL
            return true;
        if(p!=NULL && q==NULL) // checking if anyone of the node of the tree is NULL
            return false;
        if(p==NULL && q!=NULL) // checking if anpne of the node of the tree is NULL
            return false;
        if(p->val!=q->val) // checkin if they are not null then they are having the same value or not
            return false;
        return isSameTree(p->right,q->right) && isSameTree(p->left,q->left); // trying the smae for the left and right nodes for both of the trees in a recursive way;
        
    }
};