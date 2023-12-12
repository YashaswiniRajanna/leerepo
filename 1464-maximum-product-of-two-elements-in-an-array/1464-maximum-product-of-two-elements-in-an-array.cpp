class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(((nums[i]-1)*(nums[j]-1))> maxi){
                    maxi=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return maxi;
    }
};