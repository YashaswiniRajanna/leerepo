# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
#Bf- take count as size traverse ll till count//2+1 TC- O(N+N/2)~O(N) SC-O(1)
#Optimal- take slow and fast nodes return slow      TC- O(N/2)~O(N) SC-O(1)
        slow=head
        fast=head
        while(fast!=None and fast.next!=None):
            fast=fast.next.next
            slow=slow.next
        return slow        
        