class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<pair<int,int>>v;
        vector<int> res;
        for(auto i : mp){
            v.push_back({i.second,i.first});
        }


        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};