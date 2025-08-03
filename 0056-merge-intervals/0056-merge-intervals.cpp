class Solution {
public:
//my own stupid tc code :x
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> tstart;
        vector<int>tend;

        if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        ans.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1;i<intervals.size();i++){
            if(ans[ans.size()-1][1]>=intervals[i][0])
        {
            vector<int> temp;
            if(intervals[i][1]>=ans[ans.size()-1][1]){
                temp={ans[ans.size()-1][0],intervals[i][1]};
            }
            else{
                temp={ans[ans.size()-1][0],ans[ans.size()-1][1]};
            }
            ans.pop_back();
            ans.push_back(temp);
        }
        else{
            ans.push_back({intervals[i][0],intervals[i][1]});
        }
        }
        for(auto i: ans){
            cout<<i[0]<<" "<<i[1]<<endl;
        }
        set<vector<int>> s;
        for(auto i: ans){
            s.insert(i);
        }
        vector<vector<int>> final_ans(s.begin(),s.end());
        return final_ans;
    }
};