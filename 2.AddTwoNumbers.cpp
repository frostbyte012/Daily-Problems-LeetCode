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

    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        int sum=0,x=0,y=0,carryDigit=0;
        
        while(l1 || l2 || carryDigit)
        {
            if(l1)
            {
                x=l1->val;
                l1=l1->next;
            }
            else{
                x=0;
            }
            if(l2)
            {
                y=l2->val;
                l2=l2->next;
            }
            else{
                y=0;
            }
            
            sum=x+y+carryDigit;
            carryDigit=sum/10;
            
            ListNode* node = new ListNode(sum%10);
            
            temp->next=node;
            
            temp=temp->next;
            
        }
        
        return head->next;
    
    }
};