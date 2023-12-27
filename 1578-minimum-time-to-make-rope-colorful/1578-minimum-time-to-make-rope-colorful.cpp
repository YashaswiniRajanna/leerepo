class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum=0;
        int prev=0;
        for(int i=1;i<colors.size();i++){
            // char prev=i-1;
            if(colors[prev]==colors[i]){
                if(neededTime[prev]<neededTime[i]){
                    sum+=neededTime[prev];
                    prev=i;
                }
                else{
                    sum+=neededTime[i];
                }
            }
            else{
                prev=i;
                
            }
        }
        return sum;
    }
};