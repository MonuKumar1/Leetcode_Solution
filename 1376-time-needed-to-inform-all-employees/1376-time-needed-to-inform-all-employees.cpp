class Solution {
public:
    unordered_map<int,vector<int>>mp;
    
    int ans=0,maxi=0;
    
    void dfs(int manager,vector<int>& informTime)
    {
        maxi=max(maxi,ans);
        
        for(auto x:mp[manager])
        {
            ans+=informTime[manager];
            dfs(x,informTime);
            ans-=informTime[manager];
        }
    }
    
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        
        for(int i=0;i<n;i++)
        {
            if(manager[i]!=-1)
                mp[manager[i]].push_back(i);
        }
        dfs(headID,informTime);
        return maxi;
        
    }
};