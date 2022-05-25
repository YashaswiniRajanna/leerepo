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