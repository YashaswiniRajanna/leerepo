class Solution {
    public int getSum(int a, int b) {


        int sum=a ^ b;
        int carry=a & b;
        int tempcarry=0,tempsum=0;
        while(carry!=0){
            carry=carry<<1;
            tempsum=sum ^ carry;
            tempcarry=sum & carry;
            carry=tempcarry;
            sum=tempsum;
        }
       return sum; 
        

    }
}