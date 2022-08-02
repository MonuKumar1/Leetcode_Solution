class Solution {
public:
    vector<int>parent,rank;
    
    int findP(int u)
    {
        if(parent[u]==u)return u;
        return parent[u]=findP(parent[u]);
    }
    void unions(int u,int v)
    {
        int Pu=findP(u),Pv=findP(v);
        
        if(Pu!=Pv)
        {
            if(rank[Pu]>=rank[Pv])
            {
                parent[Pv]=Pu;
                rank[Pu] += rank[Pv];
             }
           // else if(rank[Pu]<rank[Pv])
           //  {
           //      parent[Pu]=Pv;
           //   }
            else
            {
                parent[Pu]=Pv;
                // rank[Pu]++;
                rank[Pv] += rank[Pu];
            }
        }
        
    }
    
    int removeStones(vector<vector<int>>& stones) {
     
        int n=stones.size();
        
        parent.resize(n);
        rank.resize(n,1);
        
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1])
                    unions(i,j);
                
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(parent[i]==i)cnt++;
        }
        return n-cnt;
      
    }
};