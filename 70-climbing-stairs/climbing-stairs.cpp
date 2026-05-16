class Solution {
public:
    int climbStairs(int n) {
         if(n<=2) return n;
         int fi0=1;
         int fi1=2;
         int fibo=0;
             for(int i =3 ;i<=n;i++)
        {
            fibo=fi1+fi0;
            fi0=fi1;
            fi1=fibo;
        }
        return fibo;

    }
};