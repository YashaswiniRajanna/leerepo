class Solution {
public:
    
vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    vector<int> res;
    vector<int> pre_xor(arr.size());
    pre_xor[0]=arr[0];
    for(int i=1;i<arr.size();i++){
        pre_xor[i]=pre_xor[i-1]^arr[i];
    }
    for(auto i: pre_xor){
        cout<<i<<endl;
    }

    for(int i=0;i<queries.size();i++){
        if(queries[i][0]==0)
        {
            res.push_back(pre_xor[queries[i][1]]);
        }
        else{
            res.push_back(pre_xor[queries[i][0]-1] ^ pre_xor[queries[i][1]]);
        }
    }
    return res;
        // vector<int> res;
        // for(int i=0;i<queries.size();i++){
        //     int ans=0;
        //     for(int j=queries[i][0];j<=queries[i][1];j++){ 
        //         ans^=arr[j];
        //     }
        //     res.push_back(ans);
        // }
        // return res;
    }
};