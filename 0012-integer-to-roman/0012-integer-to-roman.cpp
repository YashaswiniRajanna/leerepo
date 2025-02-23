class Solution {
public:
    string intToRoman(int num) {
        // map<int,string,greater<int>> mapp={ {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        //     {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        //     {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        //     {1, "I"}};
        // string res="";
        // for(auto &i: mapp){
        //     if(num==0) break;
        //     while(num >= i.first){
        //         res += i.second;
        //         num -= i.first;
        //     }
        // }
        // return res;

      vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };

        string result = "";
        for (auto &[value, symbol] : roman) {
            while (num >= value) {
                result += symbol;
                num -= value;
            }
        }
        return result;

    }
};