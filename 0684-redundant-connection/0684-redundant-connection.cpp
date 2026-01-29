class Solution {
public:
    vector<int>parent;
    int findParent(int node){
        if(parent[node]==node)return node;
        return parent[node] = findParent(parent[node]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;

        }

        for(int i =0;i<n;i++){
            int u = edges[i][0];
            int v = edges[i][1];

            int x = findParent(u), y = findParent(v);
            
            if(x==y){
                return {u,v};
            }
            parent[x]=y;

        }

return {0,0};
    }
};