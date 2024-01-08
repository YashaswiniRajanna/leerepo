#include <iostream>
#include <set>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // set<int>;
        // int j=0;
        //     for(int i=0;i<nums.szie();i++){
        //         set[j++].insert(nums[i]);
        //     }
        return nums[nums.size()-k];
    }
};