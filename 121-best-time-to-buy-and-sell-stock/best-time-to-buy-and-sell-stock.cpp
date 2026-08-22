class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
            for (int x : prices) { 
            minPrice = min(minPrice, x);
            maxProfit = max(maxProfit, x - minPrice);
            }   
    return maxProfit;
    }
};