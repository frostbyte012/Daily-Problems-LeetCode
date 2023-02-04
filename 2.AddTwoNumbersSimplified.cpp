#include<bits/stdc++.h>
using namespace std;


class Solution {

  struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
    
    
public:
    
    
    int reverse(int n)
    {
        int x=n,s=0;
        while(x)
        {
            s=(x%10)+(s*10);
            x=x/10;
        }
        return s;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int x=0,copy=0,sum=0,s=0,a=0;
        
        while(l1)
        {
            int x=l1->val;
         
            s=s*10+x;
          
            l1=l1->next;

        }
        
        while(l2){
          int y=l2->val;
          a=a*10+y;
          l2=l2->next;
        }
        
        s=reverse(s);
        a=reverse(a);
        
        sum=a+s;
        copy=sum;
        
        ListNode* temp;
        ListNode* h=new ListNode(0);
        
        temp=h;
        
        if(copy==0)
        {
         
            return h;
            
        }
        
        else{
            
            while(copy)
            {
              x=copy%10;
              copy=copy/10;
              ListNode* node=new ListNode(x);
              temp->next=node;
              temp=temp->next;
            
            }
            
            temp->next=NULL;
          } 
        
        return h->next;
    }
};