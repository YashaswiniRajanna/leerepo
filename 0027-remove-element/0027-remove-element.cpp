class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> res;
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            if(val== nums[i]){
             cnt++;   
            }
            if(val!=nums[i]){
               nums[i-cnt]=nums[i]; 
            }
        }
        return nums.size()-cnt;
    }
};