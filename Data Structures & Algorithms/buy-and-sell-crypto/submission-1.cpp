class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int profit = 0;
        for(int j=0;j<n;j++){
            mini = min(mini,prices[j]);
            profit = max(prices[j]-mini,profit);
        }
        
        return profit;
        
    }
};
