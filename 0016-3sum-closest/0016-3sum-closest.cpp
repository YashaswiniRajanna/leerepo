class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //bruteforce
        // sort(nums.begin(),nums.end());
        // if(nums.size()<3) return -1;
        // int ans=(nums[0]+nums[1]+nums[2]);
        // for(int i=0;i<nums.size()-2;i++){
        //     for(int j=i+1;j<nums.size()-1;j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(abs(target-ans) > abs(target-(nums[i]+nums[j]+nums[k]))){
        //                 ans=(nums[i]+nums[j]+nums[k]);
        //                 cout<<ans<<endl;
        //             }
        //         }
        //     }
        // }
        // return ans;

        //2pointer
        if(nums.size()<3) return -1;
        int ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1,right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(abs(target-ans)>abs(target-sum)){
                    ans=sum;
                }
                if(target > sum){
                    left++;
                }
                else if(target<sum){
                    right--;
                }
                else
                   return sum;   
            }
        }
            return ans;
    }
};