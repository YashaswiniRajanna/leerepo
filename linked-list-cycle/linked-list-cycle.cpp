/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode* fast=head;
        ListNode* slow=head;
        bool ret=false;
        while(slow->next!=NULL && fast!=NULL&& fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next; 
            if(fast==slow){
                ret=true;
                break;
            }
        }
        return ret;
    }
};