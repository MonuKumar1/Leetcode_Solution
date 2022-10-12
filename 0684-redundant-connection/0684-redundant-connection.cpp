class Solution {
public:
    vector<int>parent,rank;
    
    int fpar(int u)
    {
        if(parent[u]==u)return u;
        return parent[u]=fpar(parent[u]);
    }
    void unions(int u,int v)
    {
        int Pu=fpar(u),Pv=fpar(v);
        
        if(Pu!=Pv)
        {
            if(rank[Pu]>rank[Pv])
            {
                parent[Pv]=Pu;
             }
           else if(rank[Pu]<rank[Pv])
            {
                parent[Pu]=Pv;
             }
            else
            {
                parent[Pv]=Pu;
                rank[Pu]++;
            }
        }
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
            
            if(fpar(a)==fpar(b))
            {
                v[0]=a;
                v[1]=b;
                return v;
            }
            unions(a,b);
        }
        
        return v;
        
        
    }
};