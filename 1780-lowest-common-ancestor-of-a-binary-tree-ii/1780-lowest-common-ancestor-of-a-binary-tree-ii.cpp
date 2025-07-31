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
    bool p_flag=false,q_flag=false;
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL){
            return NULL;
        }
        TreeNode* left=helper(root->left,p,q);
        TreeNode* right=helper(root->right,p,q);
        if(root==p){
            p_flag=true;
            return root;
        }
        else if(q==root){
            q_flag=true;
            return root;
        }

        if(left && right){
            return root;
        }
        // return left==NULL ? right :left;
        else if(!left){
            return right;
        }
        else{
            return left;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ret=helper(root,p,q);
        if(!p_flag || !q_flag){
            return NULL;
        }
        return ret;
    }
};