class Solution {
public:
    bool isPalindrome(int x) {
                if(x < 0)  return false;
                else
                { int k = x;
                    long long tmp = 0;
                    while(k>0)
                    {
                        int r = k%10;
                        k=k/10;
                        tmp = tmp*10 +r;
                    }
                    if(tmp==x)
                    return true;
                    else 
                    return false;
                }
    }
};