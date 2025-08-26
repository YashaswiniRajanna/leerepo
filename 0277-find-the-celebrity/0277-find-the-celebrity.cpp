/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    // set<int> s;
    bool iscelebrity(int i,int n){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(knows(i,j) || !knows(j,i)){
                // s.erase(i);
                return false;
            }
            // else if(knows(j,i)){
            //     s.erase(j);
            // }
        }
        return true;
    }
    int findCelebrity(int n) {
        int celebrity=0;
        for(int i=0;i<n;i++){
            if(knows(celebrity,i)){
                celebrity=i;
            }
            // s.insert(i);
            // if(iscelebrity(i,n) && s.count(i)>0){
            //     return i;
            // }
        }
        for(int j=0;j<n;j++){
            if(iscelebrity(celebrity,n)){
                return celebrity;
            }
        }
        return -1;
        // for(int i=0;i<n;i++){
        //     if(iscelebrity(i,n)){
        //         return i;
        //     }
        // }
        // return -1;
    }
};