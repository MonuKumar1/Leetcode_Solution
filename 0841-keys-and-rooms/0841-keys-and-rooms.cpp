class Solution {
public:
    void dfs(vector<vector<int>>& rooms,int s,vector<bool>&vis)
    {
        vis[s]=true;
        for(int i=0;i<rooms[s].size();i++)
        {
            if(!vis[rooms[s][i]]) dfs(rooms,rooms[s][i],vis);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        
        int n=rooms.size();
        
        vector<bool>vis(n,false);
        vis[0]=true;
        dfs(rooms,0,vis);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])return false;
        }
        
        return true;
        
        
        // sort(rooms.begin(),rooms.end());
        // unordered_map<int,int>mp;
        // int n=rooms.size();
        // for(int i=0;i<rooms[0].size();i++)
        // {
        //     mp[rooms[0][i]]++;
        // }
        // for(int i=1;i<n;i++)
        // {
        //     if(mp.find(i)==mp.end()) return false;
        //     for(int j=0;j<rooms[i].size();j++)
        //     {
        //          mp[rooms[i][j]]++;
        //     }
        // }
        // return true;
        
        
        
        
    }
};