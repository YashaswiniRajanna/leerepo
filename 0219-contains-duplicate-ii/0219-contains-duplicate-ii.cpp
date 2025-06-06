class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==0 || nums.size()==1) return false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size() && j<i+k+1;j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
    return false;
    }
};