/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=NULL;
    void getans(TreeNode* cloned,TreeNode*  &target){
        if(cloned==NULL) return;
        if(cloned->val == target->val)
            ans=cloned;
        getans(cloned->left,target);
        getans(cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    getans(cloned,target);
        return ans;
    }
};

// class Solution {
// public:
    
//     void inOrder(TreeNode* &cloned, int &keyValue, TreeNode* &reference)
//     {
//         if(cloned==NULL)
//             return;
        
//         inOrder(cloned->left,keyValue,reference);
//         if(cloned->val==keyValue)
//         {
//             reference=cloned;
//             return;
//         }
//         inOrder(cloned->right,keyValue,reference);
//     }
    
//     TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
//         TreeNode* reference=NULL;
//         inOrder(cloned,target->val,reference);
//         return reference;
//     }
// };