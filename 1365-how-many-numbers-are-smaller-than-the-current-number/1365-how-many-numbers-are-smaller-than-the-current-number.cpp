class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        int mini =*min_element(nums.begin(),nums.end());
        int j=0;
        while(j<nums.size()){
            int count=0;
            for (int i=0;i<nums.size();i++){
                if( nums[j]>nums[i] )count++;
                if(nums[j]==mini) break;
            }
            res.push_back(count);
            j++;
        }
        return res;
    }

};