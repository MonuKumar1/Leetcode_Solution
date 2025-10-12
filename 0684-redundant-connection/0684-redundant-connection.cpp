class Solution {
public:
    vector<int>parent,rank;
    

    int findPar(int u){
        if(u == parent[u])return u;

        return parent[u] = findPar(parent[u]);
    }
  
        
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n=edges.size();
        parent.resize(n+1);
        rank.resize(n+1,0);
        vector<int>v(2);
        
        for(int i=1;i<=n;i++){
            parent[i]=i;

        }
        
        for(int i=0;i<n;i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            int x = findPar(a), y= findPar(b);
            if(x==y)
            {
                v[0]=a;
                v[1]=b;
                return v;
            }
            parent[x]=y;
            
        }
        
        return v;
        
        
    }
};