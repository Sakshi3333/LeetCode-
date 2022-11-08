class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int net_profit = 0;
        for(int i =1 ;i<prices.size();i++)            // i=1=day1
            {
                if(prices[i] >prices[i-1])net_profit+=(prices[i]-prices[i-1]);
            }
            return net_profit;
    }
};