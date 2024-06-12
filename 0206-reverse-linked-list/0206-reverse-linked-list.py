# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
#bruteforce- store ll elements in stack and pop and store back o ll => tc o(2n) scO(N)
#optimal-point the ll node in reverse => tc O(n) sc O(1)

        prev=None
        cur=head
        next=None
        while(cur!=None):
            next=cur.next
            cur.next=prev
            prev=cur
            cur=next
        return prev
            
        