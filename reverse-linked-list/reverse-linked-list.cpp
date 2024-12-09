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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode* temp=NULL;
        ListNode* ne;
        ListNode* prev=temp;
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            ne=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ne;
        }
        ne->next=prev;
        return ne;

    }
};