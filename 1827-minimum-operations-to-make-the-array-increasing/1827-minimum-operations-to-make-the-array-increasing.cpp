class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==0) return 0;
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int temp = (nums[i-1]-nums[i])+1;
                nums[i]+=temp;
                count+=temp;
            }
        }
        return count;
    }
};


    
