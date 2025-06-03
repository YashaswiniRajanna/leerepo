class Solution {
public:
//2 pointer approach
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int leng=1;
        int start=0,end=1,count=1;
        while(end<nums.size()){
            if(nums[end]==nums[end-1]){
                end++;
            }
            else if(nums[end]==nums[end-1]+1 ){
                end++;
                count++;
                leng=max(leng,count);
            }
            else{
                start++;
                end=start+1;
                count=1;
        }

        }
        
        return max(leng,count);
    }
};
//for loop iteration method
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.empty()) return 0;
//         int count=1,leng=0;
//         sort(nums.begin(), nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//                 continue;
//             }
//             else if(nums[i]==nums[i-1]+1){
//                 count++;
//             }
//             else{
//                 leng=max(count,leng);
//                 count=1;
//             }
//         }
//         return max(count,leng);
//     }
// };
