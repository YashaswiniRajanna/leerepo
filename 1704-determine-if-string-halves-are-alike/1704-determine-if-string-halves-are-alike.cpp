class Solution {
public:
    bool halvesAreAlike(string s) {
        int count=0,count1=0,count2=0;
    
       for(auto i: s) {
           count++;
       }
        for(int i=0;i<count/2;i++){
           if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' ||s[i]=='o' || s[i]=='O' || s[i]== 'u' ||s[i]=='U'){
               count1++;
           }
        }
        
          for(int i=count/2;i<count;i++){
           if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' ||s[i]=='I' ||s[i]=='o' || s[i]=='O' || s[i]== 'u' ||s[i]=='U'){
               count2++;
           }
        }
        cout<<count/2<<" "<<count1<<" "<<count2;
        return count1==count2;
    }
};