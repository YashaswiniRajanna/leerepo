/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
       int maxDepth = 0; 
    int traverse(TreeNode* root, int start){
        if (!root)
            return 0; 
        int left = traverse(root->left, start); 
        int right = traverse(root->right, start); 
    int depth = 0; 
        if (root->val == start){
            maxDepth = max(left, right); 
            depth = -1; 
        }else if (left >= 0 and right >= 0){
            depth = max(left, right) + 1;
        }else{
            int dd = abs(left) + abs(right); 
            maxDepth = max(dd, maxDepth); 
            depth = min(left, right) - 1; 
        }
        return depth; 
    }
    int amountOfTime(TreeNode* root, int start) {
        traverse(root, start); 
        return maxDepth;  
    }
};