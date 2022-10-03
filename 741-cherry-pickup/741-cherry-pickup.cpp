class Solution {
    public:
   int dp[51][51][51];
    int func(int r1 , int c1 , int r2 , int n , vector<vector<int>> &grid )
    {
        int c2=r1+c1-r2;
        
        if(r1>=n || r2>=n || c1>=n || c2>=n || grid[r1][c1]==-1 || grid[r2][c2]==-1)
        {
            return INT_MIN;
        }
        
        if(dp[r1][c1][r2]!=-1)
        {
            return dp[r1][c1][r2];
        }
        
        if(r1==n-1 && c1==n-1)
        {
            return grid[r1][c1];
        }
        
        int ans=grid[r1][c1];
        
        if(r1!=r2)
        {
            ans += grid[r2][c2];
        }
        
        int temp= max(func(r1+1 , c1 , r2+1 , n , grid) , func(r1 , c1+1 , r2 , n , grid));
        temp = max(temp , func(r1+1 , c1 , r2 , n, grid));
        temp = max(temp , func(r1 , c1+1 , r2+1 , n , grid));
        
        ans+=temp;
        
        return dp[r1][c1][r2]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp , -1 , sizeof(dp));
        int n=grid.size();
        return max(0 , func(0,0,0,n , grid));
    }
};
//     int cnt=0;
//     int dfs1(vector<vector<int>>& grid,int i,int j)
//     {
//         int n=grid.size();
//         if(i==n-1 and j==n-1)return grid[i][j];
        
//         if(i<0 || j<0 || i>=n || j>=n || grid[i][j]==-1)
//         {
//             return 0;
//         }
//         int down=0,right=0;
//         if(i+1<n and grid[i+1][j]!=-1){down=grid[i+1][j]+dfs1(grid,i+1,j);
//                                       grid[i+1][j]=0;
//                                       }
//         if(j+1<n and grid[i][j+1]!=-1){right=grid[i][j+1]+dfs1(grid,i,j+1);
//                                       grid[i][j+1]=0;
//                                       }
        
//         return max(down,right);
        
        
//     }
//      int dfs2(vector<vector<int>>& grid,int i,int j)
//     {
//         int n=grid.size();
//         if(i==0 and j==0)return grid[i][j];
        
//         if(i<0 || j<0 || i>=n || j>=n || grid[i][j]==-1)
//         {
//             return 0;
//         }
//         int left=0,up=0;
//         if(i-1>=0 and grid[i-1][j]!=-1){up=grid[i-1][j]+dfs2(grid,i-1,j);
//                                       grid[i-1][j]=0;
//                                       }
//         if(j-1>=0 and grid[i][j-1]!=-1){left=grid[i][j-1]+dfs2(grid,i,j-1);
//                                       grid[i][j-1]=0;
//                                       }
        
//         return max(left,up);
        
        
//     }
    
//     int cherryPickup(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int y=0;
//         int x=dfs1(grid,0,0);
//         cout<<x<<endl;
//        if(x>0) y=dfs2(grid,n-1,n-1);
//         return x+y;
        
        
//     }
// };