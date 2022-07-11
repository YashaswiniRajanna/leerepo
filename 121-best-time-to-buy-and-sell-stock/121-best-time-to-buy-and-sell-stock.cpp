// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int i,j;
//         int profit=0,maxprofit=0;
//         //int min=prix[0];
//         for(int i=0;i<prices.size()-1;i++){
//             for(int j=i+1;j<prices.size();j++){
//                 profit=prices[j]-prices[i];
//                 if(profit>maxprofit){
//                     maxprofit=profit;
//                 }
//             }
//         }
//         return maxprofit;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minb=prices[0];
        int maxprice=0;
        for(int i=1;i<prices.size();i++){
            minb=min(minb,prices[i]);
            maxprice=max(maxprice,prices[i]-minb);
        }
        return maxprice;
    }
};