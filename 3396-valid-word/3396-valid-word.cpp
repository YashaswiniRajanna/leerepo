class Solution {
public:
    bool isValid(string word) {
        int alphacount=0;
        bool uppercase=false, lowercase=false;
        bool vowel=false,consonants=false;
        bool number=true;

        for(auto i: word){
            if(isdigit(i)){
                cout<<"in numbers";
                if(i-'0'<0 && i-'0'>9){
                    number=false;
                }
            }
            else if(isalpha(i)){
                alphacount++;
                if(i-'a'>=0){
                    lowercase=true;
                }
                else if (i-'a'< 0){
                    uppercase=true;
                }
                if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' ||i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                    vowel=true;
                }
                else{
                    consonants=true;
                }
            }
            else{
                return false;
            }
        }
        return  word.size()>2 && alphacount && vowel && consonants && number;
    }
};