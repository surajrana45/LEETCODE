class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = 0;
        int maxp = 0;
        int maxi = INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
          if(prices[mini]>prices[i]){
              mini = i;
              maxi = 0;
          }
          
          if(maxi<=prices[i] && i>mini)
          {
              maxi = prices[i];
              maxp = max(maxp,(maxi-prices[mini]));
          }
            
        }
        return maxp;
    }
};