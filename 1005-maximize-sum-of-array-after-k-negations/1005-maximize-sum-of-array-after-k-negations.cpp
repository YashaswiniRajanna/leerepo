class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++)
            {
                if(k>0 && nums[i]<0){
                    nums[i]=(-nums[i]);
                    k--;
                }
                else{
                    break;
                }
            }
        if(k>0){
            sort(nums.begin(),nums.end());
            while(k>0){
                nums[0]=(-nums[0]);
                k--;
            }
        }
        int res=accumulate(nums.begin(),nums.end(),0);
        return res;
    }
};