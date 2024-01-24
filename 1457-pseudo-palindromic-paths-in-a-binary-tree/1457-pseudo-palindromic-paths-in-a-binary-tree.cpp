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
    
    bool check(vector<int>&freq){
        int count = 0;
        for(int i=1;i<=9;i++){
            if(freq[i]%2!=0){
                count++;
            }
        }
        if(count<=1) return true;
        return false;
    }

    void help(TreeNode* root,vector<int>&freq,int &ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right == NULL){
            freq[root->val]++;
            if(check(freq)){
                ans++;
            }
            freq[root->val]--;
            return ;
        }
        freq[root->val]++;
        help(root->left,freq,ans);
        help(root->right,freq,ans);
        freq[root->val]--;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        int ans = 0;
        vector<int>freq(10,0);
        help(root,freq,ans);
        return ans;
    }
};