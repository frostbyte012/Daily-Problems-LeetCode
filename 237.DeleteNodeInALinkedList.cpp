#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    void deleteNode(ListNode* node) {  
      node->val=node->next->val;
      node->next=node->next->next;
    }
};

//Code 2
/**
 * 
 * 
 * /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
// void deleteNode(ListNode* curr) {
    
//     ListNode *temp=curr->next;
//     curr->val=temp->val;
//     curr->next=temp->next;
//     delete temp;
    
// }
// };