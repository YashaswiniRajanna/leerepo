class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int  minb=prices[0];
        for(int i=0;i<prices.size();i++){
            minb=min(prices[i],minb);
            res=max(res, prices[i]-minb);
        }
        return res;
    }
};