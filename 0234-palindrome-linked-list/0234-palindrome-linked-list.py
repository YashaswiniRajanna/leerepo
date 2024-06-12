# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        t=[] 
        temp=head
        if(head== None or head.next==None):
            return True
        while(temp!=None):
            t.append(temp.val)
            temp=temp.next
        l,r=0,len(t)-1
        print(len(t))
        while (l<=r and t[l]==t[r]):
            l+=1
            r-=1
        return l>r
        
            
    