class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        long long maxi=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        maxi= ((nums[n-1]*nums[n-2])-(nums[0]*nums[1]));
        // for(int i=0;i<nums.size();i++){
        //    for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //              for(int l=k+1;l<nums.size();l++){
        //                  if((nums[i]*nums[j])-(nums[k]*nums[l]) >maxi){
        //                      maxi=max(maxi,((nums[i]*nums[j])-(nums[k]*nums[l])));
        //                  }
        //    }
        //         }
        //    }
        // }
       return maxi; 
    }
};