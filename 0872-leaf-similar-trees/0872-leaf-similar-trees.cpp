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
    void check(TreeNode* root, vector<int>& res){
        if(!root) return;
        if(root->left==NULL && root->right== NULL){
                res.push_back(root->val);

        
            
         } 
        
        check(root->left,res);
        check(root->right,res);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1;
        vector<int>leaf2;
        check(root1,leaf1);
        check(root2,leaf2);
        cout<<leaf1.size();
        cout<<leaf2.size();

        for(int i=0;i<leaf1.size();i++){
            cout<<leaf1[i];
        }
         for(int i=0;i<leaf2.size();i++){
            cout<<leaf2[i];
        }
        
        return leaf1==leaf2;
    }
};