class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int starti=0,targeti=0;
        int res=INT_MAX;
        for(int i=0;i<nums.size() && res >abs(start-i) ;++i){
            if(target == nums[i]){
                // targeti=i;
                // cout<<targeti;
                res=abs(start-i);
                
            }
           
        }
        return res;
    }
};