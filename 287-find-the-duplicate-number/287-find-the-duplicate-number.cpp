class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int count=-1;
      
        sort(nums.begin(),nums.end());
         int temp=nums[0];
        for(int i=1;i<nums.size();i++){
                if(nums[i]==temp)
                   count= nums[i];
            else
                temp=nums[i];
            }
        
        return count;
    }
};