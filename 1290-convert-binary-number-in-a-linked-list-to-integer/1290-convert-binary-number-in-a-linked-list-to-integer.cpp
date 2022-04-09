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
    int getDecimalValue(ListNode* head) {
        int ans=0,base=2,datai=0;
        //vector<int>res;
        ListNode* temp=head;
        while(temp!=NULL){
            int datai=temp->val;
            ans=ans*2+datai;
            temp=temp->next;
        }
        
        return ans;
        
    }
};