class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < (1 << n); i++) {
            vector<int> sub;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sub.push_back(nums[j]);
                }

            }
                res.push_back(sub);
            
        }
        set<vector<int>>s;
        for(auto i:res){
            s.insert(i);
        }
        vector<vector<int>>res2;
        for(auto i :s){
            res2.push_back(i);
        }   
        return res2;
    }
};