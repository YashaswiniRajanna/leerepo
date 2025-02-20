class Solution {
public:
    int reverse(int x) {
      long n=x,digit=0,res=0;
      cout<<INT_MAX<<endl;
      if(x > INT_MAX || x < INT_MIN) return 0;
        if(n>=0){
           while(n!=0){
            digit=n%10;
            res=res*10+digit;
            n/=10;
        }
        if ((res > INT_MAX || res < INT_MIN)) return 0;
        else return res; 
        }
        else{
            n*=-1;
            while(n!=0){
            digit=n%10;
            res=res*10+digit;
            n/=10;
        }
        if (res > INT_MAX || res < INT_MIN) return 0;
        else  return -1*res; 
    }
    if(res > INT_MAX || res < INT_MIN) return 0;
    else return res;
    }
};
