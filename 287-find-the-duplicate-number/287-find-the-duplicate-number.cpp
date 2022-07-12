class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        sort(nums.begin(),nums.end());
        int temp=nums[0];
       for(int i=1;i<nums.size();i++){
            if(temp==nums[i])
                return nums[i];
           else{
               temp=nums[i];
           }
         
       }
     
     return -1;
    }
};