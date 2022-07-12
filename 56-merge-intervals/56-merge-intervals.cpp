#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
    if(intervals.size()==0)return result;
    sort(intervals.begin(),intervals.end());
        vector<int> check=intervals[0];
    for(auto i: intervals){
        if(i[0] <= check[1]){
            check[1]=max(i[1],check[1]);
        }
        else{
            result.push_back(check);
            check=i;
            
        }
    }
        result.push_back(check);
        return result;
    }
};