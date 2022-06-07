#include<bits/stdc++.h>
using namespace std;

class LinkedList{

public:
ListNode *getIntersectionNode(ListNode *headA,ListNode *headB){
set<ListNode*> s;

while(headA!=NULL)
{
    s.insert(headA);
    headA=headA->next;
}

while(headB!=NULL)
{
    if(s.find(headB)!=s.end())
       {
           return headB;
       }
       headB=headB->next;
}
   return NULL;

}



};

