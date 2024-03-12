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

// void findAndEraseSubarrayWithZeroSum(vector<int>& arr) {
//  unordered_set<int> sumSet;
//     int sum = 0;

//     for (int i = 0; i < arr.size(); i++) {
//         sum += arr[i];
//         if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
//             // Found subarray with sum 0, erase it
//             arr.erase(arr.begin(), arr.begin() + i + 1);
//         }

//         sumSet.insert(sum);
//     }
//     cout<<arr.size();
// }
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* front= new ListNode(0,head);
        ListNode* start=front;
        while(start!=NULL){
            int sum=0;
            ListNode* end=start->next;
            while(end!=NULL){
                sum += end->val;
                if(sum==0){
                    start->next=end->next;
                }
                end=end->next;
            }
            start=start->next;
        }
        return front->next;
//      vector<int> nonz;
 //        ListNode* temp= head;
 //        ListNode* newi= NULL;
 //        while(temp->next!=NULL){
 //            nonz.push_back(temp->val);
 //        }
 // findAndEraseSubarrayWithZeroSum(nonz); 
 //        cout<<nonz.size()<<endl;
 //        if(nonz.size()==0){
 //            return NULL;
 //        }
 //        ListNode* po=NULL;
    // for(int i=0;i<nonz.size();i++){
    //     if(newi==NULL){
    //         po=newi;
    //     }
    //     newi->val=nonz[i];
    //     newi=newi->next;
    // }
        
        // return po;
    }
};