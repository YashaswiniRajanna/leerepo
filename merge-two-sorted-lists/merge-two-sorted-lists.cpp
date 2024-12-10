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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL) return l1;
        if(l1==NULL && l2!=NULL) return l2;
        if(l1!=NULL && l2==NULL) return l1;
        ListNode* newnode=new ListNode(-1);
        ListNode* temp=newnode;
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val ){
                temp->next=new ListNode(l1->val);
                l1=l1->next;
                temp=temp->next;
            }
            else{
                temp->next=new ListNode(l2->val);
                l2=l2->next;
                temp=temp->next;
            }
        }
        while(l1!=NULL){
            temp->next=new ListNode(l1->val);
            l1=l1->next;
            temp=temp->next;
        }
        while(l2!=NULL){
            temp->next=new ListNode(l2->val);
                l2=l2->next;
                temp=temp->next;
        }
        return newnode->next;
    }
};