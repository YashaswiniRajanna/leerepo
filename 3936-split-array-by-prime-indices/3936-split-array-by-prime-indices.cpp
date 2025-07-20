class Solution {
public:
    // bool isprime(int n){
    //     if(n<2) return false;
    //     for(int i=2;i*i<n;i++){
    //         if(n%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    long long splitArray(vector<int>& nums) {
        long long a=0,b=0;
        // long long ans=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            bool prime=true;;
            if(i<2) prime =false;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    prime=false;
                }
            }
            if(prime){
                a+=(long long)nums[i];
            }
            else{
                b+=(long long)nums[i];
            }
        }
            return abs(a-b);
        }

};