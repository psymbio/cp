class Solution {
    public int fib(int N) {
        int f0 = 0, f1 = 1, f = 0;
        if(N==0) return 0;
        if(N==1) return 1;
        for(int i = 2; i <= N; i++) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        return f;
    }
}
