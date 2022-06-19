class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int >temp;
        int tsum=0;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]+tsum);
            tsum += nums[i];
        }
        return temp;
    }
};