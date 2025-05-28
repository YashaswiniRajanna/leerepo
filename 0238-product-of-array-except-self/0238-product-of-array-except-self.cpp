class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans= 1,count=0;
        vector<int> res;
        for(auto i: nums){
            if(i!=0){
                ans*=i;
            }
            if(i==0){
                count++;
            }
        }
        cout<<ans;
        if(count>1){
            for(int i=0;i<nums.size();i++){
                res.push_back(0);
            }
            return res;
        }
        else{
        for(int i=0;i<nums.size();i++){

            if(nums[i]!=0){
                if(count>0){
                    res.push_back(0);
                }
                else{
                    res.push_back(ans/nums[i]);
                }
            }
            if(nums[i]==0){
                res.push_back(ans);
            }
        }
        return res;
        }
    }
};