class Solution {
public:
    int maxProfit(vector<int>& prices) {

         int mini=1000000,maxi=-1;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
            
        }
        return maxi;
        
//         priority_queue<int, vector<int>, greater<int>>pq;
//         int n=p.size();
//         pq.push(p[0]);
//         int maxi=0;
//         for(int i=1;i<n;i++)
//         {
//             int temp=pq.top();
//             cout<<temp<<" ";
//             maxi=max(p[i]-temp,maxi);
//               pq.push(p[i]);        
            
//         }
//         return maxi;
        
        
   
    }
};