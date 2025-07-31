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
    map<int,vector<int>> mp;
    
    // void helper(TreeNode* root,int level,int depth){
    //     if(!root){
    //         return;
    //     }
    //     mp[level].push_back({depth,root->val});
    //     helper(root->left,level-1,depth+1);
    //     helper(root->right,level+1,depth+1);
    // }
    void helper(TreeNode* root,int level){
        if(!root){
            return;
        }
        queue<pair<int,TreeNode*>>q;
        q.push({0,root});
        while(!q.empty()){
            TreeNode* curr=q.front().second;
            int level=q.front().first;
            q.pop();
            mp[level].push_back(curr->val);
            if(curr->left){
                q.push({level-1,curr->left});
            }
            if(curr->right){
                q.push({level+1,curr->right});
            }
        }
    }
    vector<vector<int>> verticalOrder(TreeNode* root) {
        // helper(root,0,0);
        helper(root,0);
        //  unordered_map<int,vector<int>> mp;
       vector<vector<int>>res;
       int ind=0;
       for(auto i: mp){
         res.push_back(i.second);
       }
    //    for(auto m: mp){
    //     sort(m.second.begin(),m.second.end(),[](const pair<int,int>&a, const pair<int,int>&b){
    //             return a.first<b.first;
    //     });
    //    }
        // for(auto i: mp){
        //     vector<int> vals;
        //     for(auto j: i.second){
        //         vals.push_back(j.second);
        //     }
        //     res.push_back(vals);
        // }
        return res;
    }
};