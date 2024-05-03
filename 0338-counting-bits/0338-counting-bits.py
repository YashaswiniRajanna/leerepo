class Solution:   
    def countBits(self, n: int) -> List[int]:
        def ctob(n:int)->int:
            rem,re=0,0
            while(n!=0):
                rem=n%2
                n=n//2
                re=re+rem
            return re
                
            
        res=[]
        for i in range(n+1):
            t=int(ctob(i))
            res.append(t)
        return res
            
        
        