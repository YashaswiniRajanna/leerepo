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
    int getAns(TreeNode* root, int maxi, int mini){
        if(!root){
            return maxi-mini;
        }

        maxi = max(maxi, root->val);
        mini = min(mini, root->val);
        return max(getAns(root->left, maxi, mini), getAns(root->right, maxi, mini));
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return getAns(root, INT_MIN, INT_MAX);
    }
};
        
//         int ancestors = 0;
//         int ancestors2=0;
//         if(root==NULL) return 0;
//         else{
//             if(root->left!=NULL && root->right!=NULL){
//         ancestors=max(abs(root->left->val-root->val),abs(root->right->val-root->val));
//         ancestors2=max(ancestors2,ancestors);
//         root=root->right;
//         root=root->left;
//             }
//           else if(root->left==NULL){
              
//               ancestors2=max(ancestors2,abs(root->right->val-root->val));
//                root=root->right;
//           }
//             else{
//               ancestors2 = max(ancestors2,abs(root->left->val-root->val));
//                  root=root->left;
//             }
//         }
        
//          return ancestors2;   
//     }
// };