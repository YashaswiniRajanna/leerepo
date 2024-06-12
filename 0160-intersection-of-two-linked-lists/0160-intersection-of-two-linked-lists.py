# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        # 1 bf= o(m*n)
        # while(headB!= None):
        #     temp=headA
        #     while(temp!=None):
        #         if(temp==headB):
        #             return temp
        #         temp=temp.next
        #     headB=headB.next
        
        #2 using dummy
        d1=headA
        d2=headB
        while d1!=d2:
            d1= headB if d1 == None else d1.next
            d2= headA if d2 == None else d2.next
        return d1
                
            
        
                
            
        