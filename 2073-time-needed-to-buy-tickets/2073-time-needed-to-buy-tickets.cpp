class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        int count=0;
        vector<int> temp=tickets;
        cout<<endl;
        while(temp[k]>0){
            for(int i=0;i<n;i++){
                if(temp[i]!=0){
                    count++;
                    temp[i]--;
                }
                if(temp[k]==0){
                    return count;
                }
            }
        }

        return count;
    }
};
