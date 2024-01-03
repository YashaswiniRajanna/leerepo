class Solution {
public:
    long long sum(vector<int>asteroids){
        long long tsum=0;
        for(int i=0;i<asteroids.size();i++){
            tsum+=(long long)asteroids[i];
      }
        return tsum;
    }
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long some=(long long)sum(asteroids);
        sort(asteroids.begin(),asteroids.end());
        cout<<some;
        bool flag=false;
        long long count=(long long)mass;
        for(int i=0;i<asteroids.size();i++){
            if(count>=asteroids[i]){
                count+= asteroids[i];
            }
        }
        if((long long)(some+mass)-count==0)
            return true;
        else
           return false;
    }
};