class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        int n=nums.size();
        vector<int> count;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for (auto it=umap.begin();it!=umap.end();it++){
            if(it->second > n/3)
            {
                count.push_back(it->first);
            }
        }
        return count;
        
    }
};