class Solution {
public:
    void dfs(vector<vector<int>>& v,int i,int j)
    {
        v[i][j]=0;
        for(int k=0;k<v.size();k++)
        {
            if(v[j][k]==1)
                {
                    
                    dfs(v,j,k);
                }
            
        }
    }
    int findCircleNum(vector<vector<int>>& v) {
        
        int n=v.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                {
                    count++;
                    dfs(v,i,j);
                }
            }
        }
        return count;
        
    }
};