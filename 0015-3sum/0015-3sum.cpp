class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ress;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int start=i+1,end=nums.size()-1;
            while(start<end){
                if(nums[start]+nums[end]+nums[i]==0){
                    ress.insert({nums[i],nums[start],nums[end]}); 
                    start++;
                    end--;
                }
                else if(nums[start]+nums[end]+nums[i]>0){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        vector<vector<int>> res(ress.begin(),ress.end());
        return res;
    }
};