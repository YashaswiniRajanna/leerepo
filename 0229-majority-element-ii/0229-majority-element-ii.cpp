class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          unordered_map<int,int> m;
        vector<int> res;
        for(auto i: nums){
            m[i]++;
        }
        int n=nums.size();
        for(auto i: m){
            if(i.second>n/3){
                res.push_back(i.first);
            }
        }
        return res;
        
    }
};