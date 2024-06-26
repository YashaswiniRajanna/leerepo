# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
#Bf= take a ll size-n and delete the node form front  TC-O(T + N) SC- O(1)
#Optimal= fast at n and slow at n-1 and point slow next = slow next next TC-O(T + N) SC- O(1)

        temp=head
        fast=head
        slow=head
        
        for i in range(n):
            fast=fast.next
        
        if(fast==None):
            return head.next
            head=None
            
        while(fast.next !=None):
            fast=fast.next
            slow=slow.next
        
        delete=slow.next
        slow.next=slow.next.next
        delete=None
        return head
        
        
        
        