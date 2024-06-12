# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
#BF-> store all elements in array sort and put it back TC-O(N+N log(N)+N)~ O(N LOGN N) SC- O(2N)~(N)
#Optimal- merge sort inplace TC=O(N) SC O(1)
        if(list1==None):
            return list2
        if(list2==None):
            return list1
        if(list1==None and list2==None):
            return list1
        else:
            dummy= ListNode(-1)
            temp=dummy
            while(list1!=None and list2!=None):
                if(list1.val <=list2.val):
                    temp.next=ListNode(list1.val)
                    list1=list1.next
                else:
                    temp.next=ListNode(list2.val)
                    list2=list2.next
                temp=temp.next

            if(list1!= None):
                temp.next=list1
            else:
                temp.next=list2

            return dummy.next
        
    
        
    