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
        if(findP(u)!=findP(v))
        {
            parent[findP(u)]=findP(v);
        }
        
    }
    
    int removeStones(vector<vector<int>>& stones) {
     
        int n=stones.size();
        
        parent.resize(n);
        
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