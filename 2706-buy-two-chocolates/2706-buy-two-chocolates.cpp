class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int sum=0;
        if(prices.size()>=2){
        if(prices[0]+prices[1]>money){
            return money;
        }
            else
                return money-(prices[0]+prices[1]);
        }
        return 0;
    }
};
//         int counter=0;
//         int sum=0;
        
//          for(int i=0;i<prices.size();i++){
//              if(money-prices[i]!=0 && counter!=2 && sum<money){
//                  counter++;
//                  sum+=prices[i];
//              }
//          }
//         if(counter==2) return money-sum;
//         else return money;
    
