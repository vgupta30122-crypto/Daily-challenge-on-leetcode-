class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size();
        vector<int> prefmin(n);
        prefmin[0]=prices[0];
        for(int i=1;i<n;i++){
            prefmin[i] = min(prefmin[i-1],prices[i]);
        }
        vector<int> sufmax(n);
        sufmax[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--){
            sufmax[i] = max(sufmax[i+1],prices[i]);
        }
        int maxProfit =0;
        for(int i=0;i<n-1;i++){
            int currmin = prefmin[i];
            int nextmax = sufmax[i+1];
            int profit = nextmax -currmin;
            maxProfit = max(maxProfit , profit);
        }

       
      
        // int maxprofit=0 ; 
        // // int = INT_MIN;
        // for(int i=0;i<n-1;i++){
        //     int buy =prices[i];
        //     for(int j=i+1;j<n;j++){
        //         int sell =prices[j];


        //         int profit = buy -sell;
        //         maxprofit = max( maxprofit,profit );
                // if(prices[i]==prices[j]){
                //    return prices[i];
                // }
                // else if(prices[i]>prices[j]){
                //     return max(prices[i],prices[j]);
                // }
                // else{
                //     return prices[j];

                // }
                // maxprofit=max(profit[i],profit[j])-INT_MIN;


            
            
        
        return maxProfit;

        
    }
     
};