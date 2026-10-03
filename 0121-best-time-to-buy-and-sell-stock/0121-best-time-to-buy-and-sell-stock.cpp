
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size();
        int maxProfit =0;
        int l =INT_MAX;
        for(int i=0;i<n;i++){
            l=min(l,prices[i]);
             maxProfit=max( maxProfit,prices[i]-l);
            
        }

        return maxProfit;

        
    }
     
};