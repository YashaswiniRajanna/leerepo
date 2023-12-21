class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // int maxi=0;
        // sort(points.begin(),points.end());
        // for(int i=0;i<points.size();i++){
        //     // maxi=points[0][i-1]
        //         maxi=max(maxi,abs(points[i][0]-points[i-1][0])); 
        // }
        // return maxi;
    sort(points.begin(), points.end());
    for(int i=0;i<points.size();i++){
        for(int j=0;j<points[0].size();j++){
            cout<<points[i][j];
        }
    }
        int maxWidth = 0;
        for(int i = 0; i < points.size()-1; i++){
           // if(points[i][0] != points[i+1][0]){
               maxWidth = max(maxWidth, points[i+1][0]-points[i][0]);
           // }
        }
        return maxWidth;
    }
};