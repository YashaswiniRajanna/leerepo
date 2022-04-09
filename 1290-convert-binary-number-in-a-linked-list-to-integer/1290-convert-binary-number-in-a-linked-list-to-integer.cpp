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
     
        
        //101==1*1000+0*100+1*10
      //1011=1*1000+0*100+1*10+1*1; 
        //1011=11 can be 101=5*2+1 so n'=n*2+newdigit;
        
   
        ListNode* temp=head;
        while(temp!=NULL){
            int datai=temp->val;
            ans=ans*2+datai;
            temp=temp->next;
        }
        
        return ans;
        
    }
};