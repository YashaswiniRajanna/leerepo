class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
 
        vector<int> v1;
        vector<int> v2;

        int k=0,j=n;
        for(int i=0;i<n;i++){
            v1.push_back(nums[i]);
        }
        for(int i=j;i<2*n;i++){
            v2.push_back(nums[i]);
        }
        vector<int> ans;
        int  i=0;
        j=0;
        while(i<n && j<n){
            ans.push_back(v1[i]);
            ans.push_back(v2[j]);
            i++;
            j++;
        }
      return ans;
        
    }
};