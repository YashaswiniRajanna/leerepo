/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> resv;
        ListNode* newnode = new ListNode(-1);
        ListNode* temp=newnode;
        for(auto i: lists){
            ListNode* t=i;
          while(t!=NULL){
              resv.push_back(t->val);
              t=t->next;
          }  
        }
        sort(resv.begin(),resv.end());
        for(auto i: resv){
            temp->next=new ListNode(i);
            temp=temp->next;
        }
        return newnode->next;
        
    }
};