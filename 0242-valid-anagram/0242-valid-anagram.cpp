class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> temp;
        unordered_map<char,int> temp1;
if(s.size()!=t.size()){
    return false;
}
        for(int i=0;i<s.size(); i++){
            temp[s[i]]++;
        }
             
        for(int j=0;j<t.size(); j++){
            temp1[t[j]]++;
        }
        // sort(temp1.begin(),temp1.end());
      if(temp==temp1)
          return true;
        
    return false;
    }
};