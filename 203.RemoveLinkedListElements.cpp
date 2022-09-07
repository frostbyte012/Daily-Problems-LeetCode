#include<bits/stdc++.h>
using namespace std;

struct ListNode{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
 

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {


        ListNode *node=new ListNode(-1),*pos;
        
        node->next=head;
        
        pos=node;
        
        while(node->next)
        {
            if(node->next->val==val)
            {
                node->next=node->next->next;
            }
            else{
                node=node->next;
            }
        
        }
        
        return pos->next;
    }
};