BEST TIME TO BUY AND SELL STOCKS

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        if(n==1) return 0;
        int minprice = prices[0];
        for(int i=0;i<n;i++){
            ans = max(ans , prices[i] - minprice);
            minprice = min(minprice , prices[i]);
        }
        return ans;
    }
};
