class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice = prices[0], maxPrice = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            
            if(minPrice > prices[i])
            {
                
                minPrice = prices[i];
                maxPrice = 0;
            }
            if(maxPrice < prices[i])
                 maxPrice = prices[i];
            if((profit < (maxPrice - minPrice)) && (minPrice < maxPrice))
                profit = maxPrice - minPrice;
        }
        
        return profit;
    }
};
