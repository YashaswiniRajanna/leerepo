
#include<cmath>
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
     for(auto i : m){
         cout<<i.first<<" "<<i.second<<endl;
     }
        int count=0;
        for(auto i:m){
            if(i.second>0){
                if(i.second==1){
                    return-1;
                }
                else{
                    count+=(int)(ceil(i.second/3.0));
                }
            }
        }
//         for(auto i : m){
//             if(i.second%2!=0 && i.second%3!=0 && i.second%5!=0){
//                 return -1;
//             }
//             else {
//                 for(int k=0;k<i.second;k++){
//                     int maxi=2;int mini=i.second-maxi; 
                    
//                 }   
//             }
//         }
        return count;

    }
};