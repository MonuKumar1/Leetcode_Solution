class Solution {
    int n, m;
    int[][] vis;
    boolean dfs(char[][] board, String word, int i, int j, int index)
    {
        if(board[i][j] == word.charAt(index))
        {
            vis[i][j] = 1;
            if(index == word.length() - 1)
                return true;
            if(i-1 >= 0 && vis[i-1][j] == 0)
                if(dfs(board, word, i-1, j, index+1))
                    return true;
            if(i+1 < n && vis[i+1][j] == 0)
                if(dfs(board, word, i+1, j, index+1))
                    return true;
            if(j-1 >= 0 && vis[i][j-1] == 0)
                if(dfs(board, word, i, j-1, index+1))
                    return true;
            if(j+1 < m && vis[i][j+1] == 0)
                if(dfs(board, word, i, j+1, index+1))
                    return true;
            vis[i][j] = 0;
            return false;
        }
        return false;
    }
    public boolean exist(char[][] board, String word) {
         n = board.length;
        m = board[0].length;
        vis = new int[n][m];
        
        // Arrays.fill(vis,0);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                if(dfs(board, word, i, j, 0))
                    return true;
            }
        return false;
        
    }
}