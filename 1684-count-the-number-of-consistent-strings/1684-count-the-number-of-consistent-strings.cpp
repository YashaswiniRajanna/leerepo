class Solution {
public:
    bool isconsistent(string word, unordered_map<char,int> al){
        for(auto i: word){
            if(al.find(i)==al.end()){
                return false;
            }
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
    int count=0;
    unordered_map<char,int> al;
    for(auto i : allowed){
        al[i]++;
    }
        
    for(auto i: words){
        if(isconsistent(i,al)){
            count++;
        }
     }
        return count;
    }
};