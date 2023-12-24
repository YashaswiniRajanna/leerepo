class Solution {
public:
    int minOperations(string s) {
        int c0=0,c1=0,c2=0,c3=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='0')
                {
                  c0++;  
                }
                else{
                    c1++;
                }
            }
            else{
                if(s[i]=='1')
                {
                   c2++; 
                }
                else{
                   c3++; 
                }
                
            }
}
       return min(c0+c2,c1+c3);  
    }
};