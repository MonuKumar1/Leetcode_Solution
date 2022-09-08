class Solution {
public:
    int fun(vector<int>& days, vector<int>& costs,int ind,vector<int>&dp)
    {
        if(ind==days.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        
        int option1=costs[0]+fun(days,costs,ind+1,dp);
        
        int i;
        for(i=ind;i<days.size() and days[i]<days[ind]+7;i++);
        
        int option2=costs[1]+fun(days,costs,i,dp);
        
        for(i=ind;i<days.size() and days[i]<days[ind]+30;i++);
        
        int option3=costs[2]+fun(days,costs,i,dp);
        
        
        return dp[ind]=min(option1,min(option2,option3));
        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        vector<int>dp(days.size()+1,-1);
        
        return fun(days,costs,0,dp);
        
    }
};