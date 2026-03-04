class Solution {
    boolean dfs(List<Integer>[] adj, int i, int[] color, int n) {
        for (int x : adj[i]) {
            if (color[x] == -1) {
                color[x] = (color[i]==0?1:0);
                if (!dfs(adj, x, color,n))
                    return false;
            } else if (color[x] == color[i]) {
                return false;
            }
        }
        return true;
    }

    public boolean possibleBipartition(int n, int[][] dlike) {

        // bipartite graph

        List<Integer>[] adj = new List[n+1];
        for (int i = 0; i <= n; i++) {
            adj[i] = new ArrayList<>();
        }

        for (int i = 0; i < dlike.length; i++) {
            adj[dlike[i][0]].add(dlike[i][1]);
            adj[dlike[i][1]].add(dlike[i][0]);
        }

        int[] color = new int[n+1];
        Arrays.fill(color,-1);
        for (int i = 1; i <= n; i++) {

            if (color[i] == -1) {
                color[i] =0;
                if (!dfs(adj, i, color, n))
                    return false;
            }
        }
        return true;

    }
}