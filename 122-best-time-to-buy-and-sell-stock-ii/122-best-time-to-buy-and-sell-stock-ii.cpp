class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sum=0,maxi=0;
        if(prices.size()==2)
            return max(sum,prices[1]-prices[0]);
         for(int i=1;i<prices.size();i++)
         {
             sum+=max(prices[i]-prices[i-1],0);
            
        }
  

        return sum;
    }
};