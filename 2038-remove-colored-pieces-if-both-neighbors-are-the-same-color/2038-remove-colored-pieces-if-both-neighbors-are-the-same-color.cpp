class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.length()<=2)
            return false;
        else{
            int counta=0,countb=0;
            for(int i=1;i<colors.length()-1;i++){
                if(colors[i-1]==colors[i] && colors[i]==colors[i+1])
                {
                    if(colors[i]=='A')
                        counta++;
                    
            
                else
                    countb++;
        
                }
            }
            return counta-countb>=1;
        }    
    
    }    
};