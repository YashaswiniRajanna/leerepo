class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total_sum=accumulate(arr.begin(),arr.end(),0);
        if(total_sum%3!=0){
            return false;
        }
        int sum1=total_sum/3;
        int count=0;
        int arr_sum=0;
        for(int i=0;i<arr.size();i++){
            arr_sum+=arr[i];
            if(arr_sum==sum1){
                arr_sum=0;
                count++;
            }
            if(count==3){
                return true;
            }
        }
        return false;
    }
};