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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        set<pair<int,ListNode*>>s;
        
        for(int i=0;i<lists.size();i++){
            
            while(lists[i])
            {
                s.insert(pair<int,ListNode*>(lists[i]->val,lists[i]));
                lists[i]=lists[i]->next;
            }
            
        }
        
        ListNode* head=new ListNode(-1);
        ListNode* n=head;
        
        head=n;
        
        for(auto it:s)
        {
            n->next=it.second;
            n=n->next;
        }
        
        n->next=NULL;
        
        return head->next;
        
    }
};