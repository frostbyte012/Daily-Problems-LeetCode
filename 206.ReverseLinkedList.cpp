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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *temp=head;
        
        vector<int>vec;
        
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        
        for(int i=vec.size()-1;i>=0;i--)
        {
            temp->val=vec[i];
            temp=temp->next;
        }
        
        return head;
        
    }
};