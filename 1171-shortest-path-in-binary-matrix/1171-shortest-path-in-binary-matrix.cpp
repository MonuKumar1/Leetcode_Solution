class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        queue<pair<int,int>>q;
        if (grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;
        q.push({0,0});

        int dir[8][2]= {{1,1}, {0,1}, {1,0}, {0,-1}, 
                        {-1,0},{-1, -1},{1, -1},{-1, 1}};
        grid[0][0]=1;
        while(q.size()){
            int row = q.front().first;
            int col = q.front().second;

            q.pop();
            if(row==n-1 and col==n-1){
                return grid[row][col]; 
            }
           
            for(int i =0;i<8;i++){
                int x = row + dir[i][0];
                int y = col + dir[i][1];
                if(x<n and x>=0 and y<n and y>=0 and grid[x][y]==0){
                    q.push({x,y}); 
                    grid[x][y]=grid[row][col]+1;
                }
            }
        }

        return -1;


    }
};