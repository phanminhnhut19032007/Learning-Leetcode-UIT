class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        int sum=0;
        
        do
        {
            int r = num%10;
            int r1= num/10;
            sum = r+r1;
            num=sum;
        }while(sum>9);
        return sum;
    }
};