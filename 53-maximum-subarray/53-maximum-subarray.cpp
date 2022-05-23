class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int cursum=0,maxsum=INT_MIN;
    for(int i=0;i<nums.size();i++){
        cursum=max(cursum+nums[i],nums[i]);
        maxsum=max(maxsum,cursum);
    }
      return maxsum;  
    }
};
//class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         int maxsum=INT_MIN;
//         int currentsum=0;
//         for(int i=0;i<nums.size();i++){
//             currentsum=max(currentsum+nums[i],nums[i]);
//             maxsum=max(maxsum,currentsum);
//         }
//         return maxsum;
//     }

// };