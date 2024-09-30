class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> m;
        vector<int> ret;
        for(auto i: nums){
            m[i]++;
        }
    for(auto i:m){
        pq.push(make_pair(i.second,i.first));
    }
    while(pq.size()>0 && ret.size()<k){
        ret.push_back(pq.top().second);
        pq.pop();
    }
    return ret;
    }
};