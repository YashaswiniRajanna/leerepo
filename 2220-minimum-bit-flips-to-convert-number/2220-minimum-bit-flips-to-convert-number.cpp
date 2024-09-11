
class Solution {
public: 
    int minBitFlips(int start, int goal) {
        bitset<32> s_bin=bitset<32>(start);
        bitset<32> g_bin=bitset<32>(goal);
        
        bitset<32> f_xor=s_bin ^ g_bin;
        cout<<s_bin<<endl<<g_bin<<endl<<f_xor<<endl;
        return f_xor.count();
    }
};