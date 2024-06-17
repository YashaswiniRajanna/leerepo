class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int res=0;
        for(auto i: nums){
            m[i]++;
        }
        int n=nums.size();
        cout<<n/2;
        for(auto i: m){
            if(i.second>n/2){
                res=i.first;
                return res;
            }
        }
        return res;
    }
};