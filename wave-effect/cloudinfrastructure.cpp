
int maxProfit(vector<int>& prices) {
     
        int n = prices.size();
        
        int minp = INT_MAX;
        int maxp = 0;
        
        
        for(int i = 0 ; i < n ;i++)
        {
            maxp = max(maxp, prices[i]-minp );
            minp = min(minp, prices[i]);
        }
        
        return maxp;
        
    }
