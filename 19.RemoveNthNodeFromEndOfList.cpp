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
 

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* slow=head,*fast=head;
        
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        
        //Condition for deleting from Nth size backwards of N size array
        
        if(fast==NULL)
           return head->next;
        
        while(fast!=NULL  && fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;
        
        return head;
        
    }
};