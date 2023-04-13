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
        
  
  
      ListNode *slow=head; // taking the slow pointer to travel the single distance
      ListNode *fast=head; // taking the fast pointer to travel the double distance
        
      while(fast!=NULL && fast->next!=NULL) // while travelling, if they are not cyclic fast or fast's next will reach the end [NULL] 
      {          
          slow=slow->next; // slow travels 1 step
    
          fast=fast->next->next; // fast travels 2 step 
          
          if(slow==fast) // when they match
            {

                return slow; // return slow if the
            }
          
      }
     
        return NULL; 
        
 }
          // return NULL if they dont meet proving acyclic linked list
};