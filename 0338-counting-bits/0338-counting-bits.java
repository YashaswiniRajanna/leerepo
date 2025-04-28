class Solution {
    public int[] countBits(int n) {
        int[] ans = new int[n+1];
        for(int i=0; i<=n; i++){
            int count = ones(i);
            ans[i] = count;
        }
        return ans;
    }
    private int ones(int n){
        int ans = 0;
        while(n != 0){
            ans++;
            n &= n-1;
        }
        return ans;
    }
}