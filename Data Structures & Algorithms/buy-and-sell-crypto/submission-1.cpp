class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mine=prices[0];
        int profit=0;
        for(int i=1; i<prices.size(); i++){
            int cost= prices[i]-mine;
            profit=max(cost, profit);
            mine=min(mine, prices[i]);
        }
        return profit;
        
    }
};
