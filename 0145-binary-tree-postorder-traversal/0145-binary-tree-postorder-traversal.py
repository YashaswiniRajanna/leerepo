# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def help(self,root,arr):
        if(root==None):
            return
        self.help(root.left,arr)
        self.help(root.right,arr)
        arr.append(root.val)
            
    def postorderTraversal(self, root):
        arr=[]
        self.help(root,arr)
        return arr
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        