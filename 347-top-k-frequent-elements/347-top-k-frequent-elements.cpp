class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>map;//frequent element
         priority_queue<pair<int,int>>pq;//to extract top k elements
        vector<int>res;
    
    for(auto x: nums){
        ++map[x];
        
    }
        
        for(auto i:map){
            
            pq.push(make_pair(i.second,i.first));
        }
        
        while(!pq.empty() && res.size()<k){
            
            res.push_back(pq.top().second);
            pq.pop();
            
        }
        return res;
    }
};