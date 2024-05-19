class Solution {
public:
    // bool check(vector<int>& nums, int start,int end){
    //     for(int i=start;i<end;i++){
    //         int j=i+1;
    //           if(nums[i]%2 == nums[j]%2 ){
    //                 return false;
    //             }
    //     }
    //     return true;
    // }
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
         int n = nums.size();
        vector<int> breakPoints(n, 0);

        for (int i = 1; i < n; ++i) {
            breakPoints[i] = breakPoints[i - 1];
            if ((nums[i] % 2) == (nums[i - 1] % 2)) {
                breakPoints[i]++;
            }
        }

        int m = queries.size();
        vector<bool> res(m);

        for (int i = 0; i < m; ++i) {
            int start = queries[i][0];
            int end = queries[i][1];
            if (start == end) {
                res[i] = true;
            } else {
                res[i] = (breakPoints[end] - breakPoints[start] == 0);
            }
        }

        return res;
        // int m=queries.size();
        // cout<<m;
        // vector<bool> res;
        // for(int i=0;i<m;i++){
        //     int start=queries[i][0];
        //     int end=queries[i][1];
        //     if(start==end){
        //         res.push_back(false);
        //     }
        //     else{
        //         bool what = check(nums,start,end);
        //         res.push_back(what);
        //     }
        // }
        // return res;
        
    }
};