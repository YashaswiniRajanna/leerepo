class Solution {
     int calculateMoney(vector<int>& nums, int i, int n, vector<int>& dp) {
        if(i >= n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
            
        int take = nums[i] + calculateMoney(nums, i+2, n, dp);
        int notTake = calculateMoney(nums, i+1, n, dp);

        return dp[i] = max(take, notTake);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        return calculateMoney(nums, 0, n, dp);
    }
};