class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    vector<int> temp;

        for (auto num:nums){
            if (temp.empty() || num > temp.back()) {
                temp.push_back(num);
            } else {
                auto it = lower_bound(temp.begin(), temp.end(), num);
                *it = num;
                // cout<<&it;
            }
        }

        return temp.size();
    }
};