class Solution {
public:
    bool dfs(int i,vector<int>&color,vector<vector<int>>&adj){
       
       
        for (auto x : adj[i]) {
        if (color[x] == -1) {
            color[x] = !color[i];
            if (!dfs(x, color, adj)) return false;
        } else if (color[x] == color[i]) {
            return false;
        }
    }
    return true;

    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        //bipartite graph
        vector<vector<int>>adj(n+1);
        for(auto x:dislikes){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int>color(n+1,-1);
       
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                color[i]=0;
                if(!dfs(i,color,adj))return false;
            }
        }

        return true;



    }
};