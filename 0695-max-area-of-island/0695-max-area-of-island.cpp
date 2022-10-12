class Solution {
public:
   
    
    void mark_current_island(vector<vector<int>> &grid,int x,int y,int r,int c,int &count)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!=1)  //Boundary case for matrix
            return;
        
        //Mark current cell as visited
        grid[x][y] = 2;
        count++;
        
        //Make recursive call in all 4 adjacent directions
        mark_current_island(grid,x+1,y,r,c,count);  //DOWN
        mark_current_island(grid,x,y+1,r,c,count);  //RIGHT
        mark_current_island(grid,x-1,y,r,c,count);  //TOP
        mark_current_island(grid,x,y-1,r,c,count);  //LEFT
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int are=0;
        int rows = grid.size();
        if(rows==0)     //Empty grid boundary case
            return 0;
        int cols = grid[0].size();
        
        //Iterate for all cells of the array
       
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                if(grid[i][j]==1)
                {   int count=0;
                    mark_current_island(grid,i,j,rows,cols,count);
                    are=max(are,count);
                }
            }
        }
        return are;
    }
 
    
};