class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2) return -1;
        int ans=(nums[0]+nums[1]+nums[2]);
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(abs(target-ans) > abs(target-(nums[i]+nums[j]+nums[k]))){
                        ans=(nums[i]+nums[j]+nums[k]);
                        cout<<ans<<endl;
                    }
                    // ans=min(ans,(nums[i]+nums[j]+nums[k]));
                }
            }
        }
        return ans;
    }
};