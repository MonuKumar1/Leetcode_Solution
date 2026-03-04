class Solution {
    public int shortestPathBinaryMatrix(int[][] grid) {
        
        

            // shortest path bfs
            int n = grid.length;
          Queue<int[]>q = new LinkedList<>();

          q.offer(new int[]{0,0});
            int [][] dir =  {{0,1},{1,0},{0,-1},{-1,0},
                            {1,1},{1,-1},{-1,1},{-1,-1},
            };
        if (grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;
    grid[0][0]=1;
          while(q.size()>0){
            int r= q.peek()[0];
            int c = q.peek()[1];
            q.poll();
            if(r==n-1 && c==n-1)return grid[r][c];
            for(int i=0;i<8;i++){
                int x = r+dir[i][0], y = c+dir[i][1];

                if(x<n && x>=0 && y<n && y>=0 && grid[x][y]==0){
                    q.offer(new int[]{x,y}); 
                    grid[x][y]=grid[r][c]+1;
                }

            }
          }
            return -1;

    }
}