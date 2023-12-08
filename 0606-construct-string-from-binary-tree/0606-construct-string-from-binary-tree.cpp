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
     void function(TreeNode* root, string& temp) {
        if (!root) return;

        temp += to_string(root->val);

        if (root->left || root->right) {
            temp += '(';
            function(root->left, temp);
            temp += ')';
        }

        if (root->right) {
            temp += '(';
            function(root->right, temp);
            temp += ')';
        }
    }

    string tree2str(TreeNode* root) {
        string temp = "";
        function(root, temp);
        return temp;
    }
    
};