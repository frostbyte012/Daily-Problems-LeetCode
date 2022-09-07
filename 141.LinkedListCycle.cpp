#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {


public:

    struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
    };
 
    bool hasCycle(ListNode *head) {
        
      ListNode *slow=head;
      ListNode *fast=head;
        
      while(fast!=NULL && fast->next!=NULL)
      {          
          slow=slow->next;
          fast=fast->next->next;
          
          if(slow==fast)
            {
              return true;
            }
          
      }
     
        return false;   
    }
};