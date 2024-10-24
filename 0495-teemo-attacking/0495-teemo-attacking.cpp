class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total=0;
        if(timeSeries.size()==0){
            return 0;
        }
        else{
            for(int i=1;i<timeSeries.size();i++){
                total+= min(timeSeries[i]-timeSeries[i-1],duration);
            }
            return total+duration;
         }
        return total;
        
//         int ans=0;
//         int t=1;
//         int maxim=timeSeries[timeSeries.size()-1]*duration+1;
//         vector<int>time (maxim,0);
//         vector<int> ot = timeSeries;
//         sort(timeSeries.begin(),timeSeries.end());

//         if(ot.size()==ot[ot.size()-1] && ot==timeSeries && duration==1){
//             return ot[ot.size()-1];
//         }
//         if(ot.size()==1){
//             return duration;
//         }
//         for(int i=0;i<ot.size();i++){
//             for(int j=ot[i];j<ot[i]+duration;j++){
//                 if(ot[i]+duration<=maxim){
//                     time[j]=1;
//                     t++;
//                 }
//             }
//         }
//         for(auto i: time){
//             if(i==1){
//                 ans++;
//             }
//         }
//         return ans;
    }
};