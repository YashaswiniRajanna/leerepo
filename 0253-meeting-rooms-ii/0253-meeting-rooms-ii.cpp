class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        vector<int> tstart;
        vector<int> tend;
        for(auto i: intervals){
            tstart.push_back(i[0]);
            tend.push_back(i[1]);
        }
        sort(tstart.begin(),tstart.end());
        sort(tend.begin(),tend.end());
        int i=0,j=0;
        int mans=INT_MIN,count=0;
        while(i<tstart.size()){
            if(tstart[i]<tend[j]){
                count++;
                i++;
            }
            else {
                count--;
                j++;
                
            }
            mans=max(mans,count);
        }
        return mans;

        // int ans=0;
        // sort(intervals.begin(),intervals.end(),[](const vector<int>& a, const vector<int>&b)       {
        //     return a[0]<b[0];
        // });
        // int mans=INT_MIN;
        // if(intervals.size()<2) return 1;
        // for(int i=0;i<intervals.size();i++){
        //     ans=1;
        //     for(int j=i+1;j<intervals.size();j++){
        //         if(!(intervals[i][1] <= intervals[j][0] || intervals[i][0] >= intervals[j][1])){
        //             ans++;
        //         }
        //     }
        //     mans=max(ans,mans);
        // }
        // if (!(intervals[j][1] <= intervals[i][0] || intervals[j][0] >= intervals[i][1])) {
        //             rooms++;
        //     }

        // for(int i=1;i<intervals.size();i++){
        //     if(intervals[i][0]>=intervals[i-1][1] && intervals[i][0]>=intervals[i-1][1]){
        //         continue;
        //     }
        //     else{
        //         ans++;
        //     }
        // }
        // return mans;
    }
};