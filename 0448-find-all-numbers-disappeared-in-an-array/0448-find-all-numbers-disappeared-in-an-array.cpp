class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mapi;
        vector<int> res;
        
        for(int i=1;i<=nums.size();i++){
            mapi.insert({i,0});
            cout<<i<<endl;
        }
        for(auto i:nums){
            mapi[i]++;

        }
        for(auto i: mapi){
            if(i.second==0){
                res.push_back(i.first);
                
            }
        }
        return res;
    }
};