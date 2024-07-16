/* class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // just track the minimum price over the iteration when we can buy and
        // then try to sell everyday and check the profit we can get
        int profit = 0;
        int min_price = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            min_price = min(min_price, prices[i]);
            profit = max(profit, prices[i] - min_price);
        }
        return profit;
    }
}; */