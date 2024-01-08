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
    int na(TreeNode* temp){
         if(!temp) return 0;

         return 1+na(temp->left)+na(temp->right);    

    }
     int av(TreeNode* temp){
         if(!temp) return 0;
         return temp->val + av(temp->left) + av(temp->right);    
    
    }

    int averageOfSubtree(TreeNode* root) {
        int nodes=0;
        if(!root) return 0;
        if(root->val == int(av(root)/na(root))) nodes++ ;
        nodes+=averageOfSubtree(root->left) + averageOfSubtree(root->right);

        return nodes;
    }
};