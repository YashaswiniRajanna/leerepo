class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int thres=arr.size()/4;
        int ret=0;
        unordered_map<int,int> m;
        for(auto i: arr){
            m[i]++;
        }
        for(auto i : m){
            if(i.second >thres){
                ret=i.first;
                break;
            }
        }
        return ret;
        
    }
};