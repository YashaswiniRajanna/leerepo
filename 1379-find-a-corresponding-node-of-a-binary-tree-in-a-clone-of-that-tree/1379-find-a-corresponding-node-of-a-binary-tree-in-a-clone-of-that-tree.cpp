/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*MINE*/
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
//REFERENCE1
// class Solution {
// public:
//  TreeNode* ans;
//     TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
//         if(cloned==NULL || original ==NULL ) return NULL;
//         if(cloned->val==target->val)
//             ans=cloned;
//         getTargetCopy(original,cloned->left,target);
//         getTargetCopy(original,cloned->right,target);
//         return ans; 
//     }
// };

//REFERENCE2
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