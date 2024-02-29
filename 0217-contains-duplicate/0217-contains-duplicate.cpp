class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>res;
        for(auto i: nums){
            res[i]++;
        }
        for(auto i: res){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
};