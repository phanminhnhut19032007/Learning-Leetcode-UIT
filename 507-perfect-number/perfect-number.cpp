class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1) return false;
        int tmp=0;
        for(int i = 1 ; i<=num/2 ;i++)
        {
            if(num%i==0)
            {
                tmp=tmp+i;
            }
        }
        if(num==tmp) return true;
        else return false;
        
    }
};