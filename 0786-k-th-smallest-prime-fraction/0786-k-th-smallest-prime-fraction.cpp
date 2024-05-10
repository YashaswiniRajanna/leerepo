class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<int,int>> fractions;
        vector<int>fv;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                fractions.push_back({arr[i],arr[j]});
            }
        }
        sort(fractions.begin(),fractions.end(),[&](const pair<int,int>&a, const pair<int,int>&b){
            return (float)a.first/a.second < (float)b.first/b.second;
        });
            
        fv.push_back(fractions[k-1].first);
        fv.push_back(fractions[k-1].second);

       return fv; 
    }
};