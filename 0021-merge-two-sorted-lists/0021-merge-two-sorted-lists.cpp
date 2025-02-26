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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL;
        ListNode* tail=NULL;
        ListNode* t1=list1;
        ListNode* t2=list2;
if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(t1->val <=  t2->val){
            head=t1;
            tail=t1;
            t1=t1->next;
        }
        else
        {
            head=t2;
            tail=t2;
            t2=t2->next;  
        }
        while(t1 != NULL && t2!=NULL){
            if(t1->val <=  t2->val){
                tail->next=t1;
                tail=tail->next;
                t1=t1->next;
            }
            else{
                tail->next=t2;
                tail=tail->next;
                t2=t2->next;
            }
        }
        if(t1!=NULL){
            tail->next=t1;
        }
        if(t2 !=NULL){
            tail->next=t2;
        }
return head;
    }
};