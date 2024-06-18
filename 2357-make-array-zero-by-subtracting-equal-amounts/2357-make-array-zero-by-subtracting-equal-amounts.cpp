class Solution {
public:
    int checkmin(vector<int> nums){
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                return nums[i];
            }
        }
        return -1;
}
    int minimumOperations(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int count=0;
        while(sum>0){
            int x= checkmin(nums);
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    nums[i]-=x;
                }
            }
            count++;
          sum=accumulate(nums.begin(),nums.end(),0);
        }
        return count;
    }
};