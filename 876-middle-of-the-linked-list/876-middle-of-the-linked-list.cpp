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
    ListNode* middleNode(ListNode* head) {
//         slow approach
//         ListNode* temp=head;
//         int count=0;
//         while(temp!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         if(count%2==0){
//             count=int(count/2);
//         }
//         else
//             count=int(count/2);
        
//          int i=0;
//           ListNode* temp1=head;
//          while(i!=count && temp1!=NULL){
//              i++;
//              temp1=temp1->next;
//          }
//         return temp1;
        
        //fast approach
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
        
    }
};