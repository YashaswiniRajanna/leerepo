class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size(),count=0;
        if(n<2){
            return -1;
        }
        for(int i=0;i<n-2;i++){
            if(2*(nums[i]+nums[i+2])==nums[i+1]){
                cout<<nums[i]<<nums[i+1]<<nums[i+2]<<endl;
                count++;
            }
        }
        return count;
    }
};