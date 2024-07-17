class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = 0;
        int sell = 0;
        while (buy < prices.size() && sell < prices.size()) {
            if (sell == prices.size() - 1) {
                profit += (prices[sell] - prices[buy]);
                break;
            }
            if (prices[sell + 1] < prices[buy] ||
                prices[sell + 1] < prices[sell]) {
                profit += (prices[sell] - prices[buy]);

                sell++;
                buy = sell;
            } else {

                sell++;
            }
        }
        return profit;
    }
};