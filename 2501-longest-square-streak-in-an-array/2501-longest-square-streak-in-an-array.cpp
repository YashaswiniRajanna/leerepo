class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int mans=0;
        unordered_set<int>se(nums.begin(),nums.end());
        for(auto i: nums){
            int ans=0;
            long long curr=i;
            while(se.find(curr)!=se.end()){
                ans++;
                if(curr*curr>1e5){
                    break;
                }
                curr=curr*curr;
            }
            mans=max(mans,ans);
        }
        return mans<2?-1:mans; 
    }
};