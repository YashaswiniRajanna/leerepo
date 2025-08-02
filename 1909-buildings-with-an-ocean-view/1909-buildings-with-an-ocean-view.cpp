class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> ans;
        int rmax=INT_MIN;
        int n=heights.size()-1;
        for(int i=n;i>=0;i--){
            // rmax=max(rmax,heights[i]);
            if(heights[i]>rmax){
                rmax=heights[i];
                ans.push_back(i);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};