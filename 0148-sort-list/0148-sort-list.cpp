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
    ListNode* sortList(ListNode* head) {
        vector<int> res;
        ListNode* n=head;
        while(n!=NULL){
            res.push_back(n->val);
            n=n->next;
        }
        sort(res.begin(),res.end());
        ListNode* ret= new ListNode(-1);
        ListNode* final=ret;
        int i=0;
        while(i<res.size()){
            ret->next= new ListNode(res[i++]);
            ret=ret->next;
        }
        return final->next;
    }
};