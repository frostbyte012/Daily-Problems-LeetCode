#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *top=head,*current=head;
        
        if(head!=NULL)
        {
            head=head->next;
        }
        
        while(head!=NULL)
        {
            if(head->val==current->val)
            {
                current->next=head->next;
            }
            else{
                current=head;
            }
            
            head=head->next;
        }
        
        return top;
        
    }
};