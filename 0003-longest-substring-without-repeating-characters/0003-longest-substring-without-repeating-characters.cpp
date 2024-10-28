class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // using map
        
        int start=0,end=0;
        int maxx=0;
        int n=s.size();
        unordered_map<char,int>mp;
        for(int end=0;end<n;end++){
            if(mp.count(s[end])==0 ||mp[s[end]]<start){
                mp[s[end]]=end;
                maxx=max(maxx,end-start+1);
            }
              else{
                      // mp.clear();
                      start=mp[s[end]]+1;
                      mp[s[end]]=end;
              }
        }
        return maxx;
       }
   };
               
        // using set
            
        // int start=0,end=0;
        // unordered_set<char>se;
        // int n=s.size();
        // int maxx=0;
        // for(int end=0;end<n;end++){
        //     if(se.count(s[end])==0){
        //         se.insert(s[end]);
        //         maxx=max(maxx,end-start +1);
        //     }
        //     else{
        //         while(se.count(s[end])!=0){
        //             se.erase(s[start]);
        //             start++;
        //         }
        //         se.insert(s[end]);
        //         // se[starr]=s[end];
        //     }
        // }
        // return maxx;
//     }
// };