// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool p_flag=false,q_flag=false;
//     TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q){
//         if(root==NULL){
//             return NULL;
//         }
//         TreeNode* left=helper(root->left,p,q);
//         TreeNode* right=helper(root->right,p,q);
//         if(root==p){
//             p_flag=true;
//             return root;
//         }
//         else if(q==root){
//             q_flag=true;
//             return root;
//         }

//         if(left && right){
//             return root;
//         }
//         // return left==NULL ? right :left;
//         else if(!left){
//             return right;
//         }
//         else{
//             return left;
//         }
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         TreeNode* ret=helper(root,p,q);
//         if(!p_flag || !q_flag){
//             return NULL;
//         }
//         return ret;
//     }
// };
class Solution {
public:
    void search(TreeNode* root, TreeNode * dest, bool &flag){
        if(!root) return;
        if(root == dest){
            flag = true;
            return;
        }
        search(root->left,dest,flag);
        search(root->right,dest,flag);

        return;
    }
public:
    TreeNode* lca(TreeNode* root,  TreeNode* p, TreeNode* q){
        if(!root) return NULL;

        if(root == p || root == q) return root;

        TreeNode* left = lca(root->left,p,q);
        TreeNode* right = lca(root->right,p,q);

        if(left && right) return root;
        if(!left) return right;
        return left;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        bool f1=false,f2=false;
        search(root,p,f1);
        search(root,q,f2);
        if(!f1 || !f2) return NULL;

        return lca(root,p,q);
    }
};