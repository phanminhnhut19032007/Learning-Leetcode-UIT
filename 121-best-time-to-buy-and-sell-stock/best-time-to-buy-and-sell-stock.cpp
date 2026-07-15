class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long minprice =INT_MAX;
        long long maxprofit = 0;

        for(long long i = 0 ; i < prices.size();i++)
        {
              if(minprice > prices[i])
              {
                minprice = prices[i];
              }
              else if(prices[i]-minprice > maxprofit)
              {
                maxprofit = prices[i]-minprice ;
              }
        }
        return maxprofit;
    }
};