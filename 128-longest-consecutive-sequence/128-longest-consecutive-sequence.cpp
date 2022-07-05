class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int temp=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[i]>nums[j])
        //         {
        //             temp=nums[i];
        //             nums[i]=nums[j];
        //             nums[j]=temp;
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        int j=0,k=j+1;
            int count=1;
        int maxi=0;
        if(nums.size()==0) return 0;
        else{
       for(int j=1;j<nums.size();j++){
            if(nums[j]==nums[j-1]+1) count++;
            else if(nums[j]==nums[j-1])  continue;
            else {
                maxi=max(maxi,count);
                count=1;
            }
        }
        return max(maxi,count);
        }
    }
};
