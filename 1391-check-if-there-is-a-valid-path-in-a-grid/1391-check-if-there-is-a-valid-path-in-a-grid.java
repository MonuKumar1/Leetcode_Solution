import java.util.*;

class Solution {

    boolean[][] vis;
    int m, n;

    public boolean hasValidPath(int[][] grid) {

        m = grid.length;
        n = grid[0].length;
        vis = new boolean[m][n];

    
        Map<Integer, int[][]> mp = new HashMap<>();

        mp.put(1, new int[][]{{0, -1}, {0, 1}});    
        mp.put(2, new int[][]{{-1, 0}, {1, 0}});     
        mp.put(3, new int[][]{{0, -1}, {1, 0}});    
        mp.put(4, new int[][]{{0, 1}, {1, 0}});     
        mp.put(5, new int[][]{{0, -1}, {-1, 0}});   
        mp.put(6, new int[][]{{0, 1}, {-1, 0}});     

        return dfs(grid, 0, 0, mp);
    }

    boolean dfs(int[][] grid, int i, int j, Map<Integer, int[][]> mp) {

        if (i == m - 1 && j == n - 1)
            return true;

        vis[i][j] = true;

        int[][] dirs = mp.get(grid[i][j]);

        for (int[] d : dirs) {
            int ni = i + d[0];
            int nj = j + d[1];

            if (ni < 0 || nj < 0 || ni >= m || nj >= n)
                continue;

            if (vis[ni][nj])
                continue;

            if (isConnected(grid, i, j, ni, nj, mp)) {
                if (dfs(grid, ni, nj, mp))
                    return true;
            }
        }

        return false;
    }

    boolean isConnected(int[][] grid, int i, int j, int ni, int nj, Map<Integer, int[][]> mp) {

        int dx = ni - i;
        int dy = nj - j;

        int[][] nextDirs = mp.get(grid[ni][nj]);

        for (int[] d : nextDirs) {
            if (d[0] == -dx && d[1] == -dy)
                return true;
        }

        return false;
    }
}