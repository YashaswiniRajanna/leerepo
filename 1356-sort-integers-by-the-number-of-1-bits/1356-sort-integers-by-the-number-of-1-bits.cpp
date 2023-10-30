class Solution {
public:
    static int numberof1(int a){
        int count=0;
        while(a){
            a= a&(a-1);
            count++;
        }
        return count;
    }
    
  static bool compare(int a,int b){
    int p = numberof1(a);
    int q = numberof1(b);
    if(p==q){
        return a<=b;
    }
    else{
        return p<q;
    }
}
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};