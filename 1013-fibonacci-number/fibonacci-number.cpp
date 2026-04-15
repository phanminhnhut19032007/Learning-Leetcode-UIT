class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int fi0=0;
        int fi1=1;
        int fibo=0;
        for(int i =2 ;i<=n;i++)
        {
            fibo=fi1+fi0;
            fi0=fi1;
            fi1=fibo;
            
        }
        return fibo;
    
    }
};