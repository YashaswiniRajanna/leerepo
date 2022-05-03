class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
//         if(nums.size()==1){
//             return 0;
//         }
//         int p=0,q=p+1;
//         int n=nums.size();
//        bool result = is_sorted(nums.begin(), nums.end());  
//         if(result==true)
//             return 0;
//         else{
//         while(p <= nums.size() && q<= nums.size()-1){
//             if(nums[p]<nums[q]){
//                  n=n-2;
//                  p++;
//                  q++;
//             }
//             else
//                 break;
//         }
//     return nums.size()-n;
//         }
//             return n;
        
                int start = -1, end = -1, n = nums.size();
    
        int temp = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] < temp) end = i;
            temp = max(temp, nums[i]);
        }

        temp = nums[n - 1];
        for(int i = n - 1; i >= 0; i--) {
            if(temp < nums[i]) start = i;
            temp = min(temp, nums[i]);
        }

        return (start == -1) ? 0 : (end - start) + 1;
    }
};
