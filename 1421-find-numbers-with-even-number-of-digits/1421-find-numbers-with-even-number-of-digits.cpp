// bY
class Solution {
public:
    int no_of_digits(int n){
        int count=0;
        while(n!=0){
            n/=10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int no=no_of_digits(nums[i]);
            if(no%2==0){
                count++;
            }
        }
        return count;
    }
};