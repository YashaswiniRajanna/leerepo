class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi=0;
        cout<<nums.size();
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 0;
        if(nums.size()==2) return ((nums[0]-nums[1])*nums[2]);

else{
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
               for(int k=j+1;k<nums.size();k++){
                   long long count=nums[i]-nums[j];
                   if(maxi<=(long long)(count*nums[k]))
                   {
                   maxi=(long long)(count*nums[k]);
                   }
               }
            }
        }
}
        return maxi;
    }
};