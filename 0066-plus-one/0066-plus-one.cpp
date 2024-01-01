class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//         unsigned long long num=0;
//         for(int i=0;i<digits.size();i++){
//             num=num*10+digits[i];
//         }
//         unsigned long long required=num+1;
//         unsigned long long nums=0;
//         vector<int> digit;
//         while(required>0){
//             digit.push_back(required%10);
//             required/=10;  

//         }
//         reverse(digit.begin(),digit.end());
//         return digit;
        int num=0;
        bool k=false;
        for( int i = digits.size()-1;i>=0;i--){
            if(  digits[i] == 9){
                k=true;
                digits[i]=0;
            }
            else{
                digits[i]++;
                return digits;
            }
        }
            if(k) digits.insert(digits.begin(),1);
            return digits;

    }
};