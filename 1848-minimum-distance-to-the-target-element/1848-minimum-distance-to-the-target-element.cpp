class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int res=INT_MAX;
        int targeti=0;
        for(int i=0;i<nums.size() && res>abs(start-i) ;++i){
            if(target == nums[i]){
                res=abs(start-i);
            }
        }
        return res;
    }
};
