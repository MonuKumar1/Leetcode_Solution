class Solution {
    public int orangesRotting(int[][] grid) {

        Queue<Pair<Integer, Integer>> q = new ArrayDeque<Pair<Integer, Integer>>();
        int m = grid.length;
        int n = grid[0].length;
        int[][] vis = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.add(new Pair<Integer, Integer>(i, j));
                    vis[i][j] = 1;
                }
            }
        }
        int[][] dir = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
        int ans = 0;
        // if(q.size()==0)return 0;
        int qLen = q.size();
        while (q.size() != 0) {
            
            int len = q.size();
            ans++;

            while (len > 0) {
                
                int x = q.peek().getKey();
                int y = q.peek().getValue();
                q.poll();
                for (int i = 0; i < 4; i++) {
                    int r = x + dir[i][0];
                    int c = y + dir[i][1];

                    if (r >= 0 && c >= 0 && r < m && c < n && grid[r][c] == 1 && vis[r][c] == 0) {
                        vis[r][c] = 1;
                        grid[r][c]=2;
                        q.offer(new Pair<Integer, Integer>(r, c));
                    }
                }
                len--;
            }
        }

        for(int [] x: grid){
            for(int y:x){
                if(y==1)return -1;
            }
        }
        if(qLen==0)return 0;
        return ans-1;

    }
}