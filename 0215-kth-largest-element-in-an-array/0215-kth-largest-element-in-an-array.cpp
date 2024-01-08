#include <iostream>
#include <set>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()-k];
        priority_queue<int> p;
        for(auto i:nums){
            p.push(i);
        }
        while(k!=1){
            p.pop();
            k--;
        }
        return p.top();
    }
};

//using priority queue



// if duplicate elements are not counted
  // set<int> s;
  //       int j=0;
  //           for(int i=0;i<nums.size();i++){
  //               s.insert(nums[i]);
  //               // cout<<nums[i];
  //           }
  //       for(auto i :s){
  //           cout<<i;
  //       }
  //       return nums[s.size()-1-k];