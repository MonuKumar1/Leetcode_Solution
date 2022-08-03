class Solution {
public:
    vector<int>parent,rank;
    int x,y;
    int findP(int u)
    {
        if(parent[u]==u)
        {return u;}
        
        return parent[u]=findP(parent[u]);
        
    }
    
    void unions(int u,int v)
    {
        int Pu=findP(u),Pv=findP(v);
        
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
        rank.resize(n+1);
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        vector<int>v(2);
        
        for(int i=0;i<n;i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            
            if(findP(a)==findP(b))
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