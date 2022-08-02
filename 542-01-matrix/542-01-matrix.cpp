class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      
           int m=mat.size();
           int n=mat[0].size();
        
        
          vector<vector<int>>ans(m,vector<int>(n,INT_MAX));
            
          queue<pair<int,int>>q;
        
            for(int i=0;i<m;i++)
            {for(int j=0;j<n;j++)
                {if(mat[i][j]==0)
                    {ans[i][j]=0;
                      q.push({i,j});}}}
        
        int dir[4][2]={{0,-1},{0,1},{-1,0},{1,0}};
        while(q.size())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int x1=x+dir[i][0];
                int y1=y+dir[i][1];
                
               if (x1 >= 0 && y1 >= 0 && x1< m && y1 < n) {
                    if (ans[x1][y1] > ans[x][y] + 1) {
                        ans[x1][y1] = ans[x][y] + 1;
                        q.push({x1,y1 });
                    }
                }
            }
            
        }
        
        return ans;
            
        
        
    }
};