class Solution {
public:
    bool isPathCrossing(string path) {
         int cnt1 = 0, cnt2 = 0;
        // bool flag  = false;
        set<pair<int,int>> st;
        for(int i = 0; i< path.size(); i++){
            if(path[i] == 'N'){
               cnt1++;
            }
           else if(path[i] == 'S'){
                cnt1--;
            }
           else if(path[i] == 'E'){
                cnt2++;
            }
           else if(path[i] == 'W'){
                cnt2--;
            }
           
            if(  (st.find({cnt1,cnt2}) != st.end()) || (cnt1 == 0 && cnt2 == 0)) return 1;
             st.insert({cnt1,cnt2});
        }
        return (cnt1 ==0 && cnt2 == 0) ;
//         int n=path.size();
//         set<pair<int,int>>map;
//          map.insert({0,0});
//         bool bol;
//         cout<<n;
//         if(n<3)
//              bol=false;
//         else{
//             int x=0,y=0;
//             for(each :path){
//                 swtich(each):
//                 case 'N':{
//                     y++;
//                     break;
//                 }
//                 case 'S':{
//                     y--;
//                     break;
//                 }
//                 case 'E':{
//                     x++;
//                     break;
//                 }
//                 case 'W':{
//                     x--;
//                     break;
//                 }
//                  if(map.)
                
                
//             }
//         }

    }
};