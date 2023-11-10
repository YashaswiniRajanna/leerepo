class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int total=0;
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        
        for(auto i:m){
            if(i.second==1){
                total+=i.first;
            }
        }
        return total;
        
    }
};