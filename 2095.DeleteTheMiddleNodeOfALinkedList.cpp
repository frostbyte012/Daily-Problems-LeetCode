#include<bits/stdc++.h>
using namespace std;


 
class Solution {
public:
    
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
     };

    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode *prev=NULL,*slow=head,*fast=head;
    
        if(head==NULL || head->next==NULL)
            return NULL;
        
        while(fast!=NULL&& fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;  
        }

        prev->next=slow->next;  
        
        delete slow;
        
        return head;
    }
};