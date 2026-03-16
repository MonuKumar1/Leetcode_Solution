class Solution {
    public void dfs(int[][] m, int[] vis,int node){
        vis[node]=1;
        for(int i=0;i<m.length;i++){
            if(m[node][i]==1 && vis[i]==0)dfs(m,vis,i); 
        }

    }
    public int findCircleNum(int[][] m) {
        int n = m.length;
        int [] vis = new int[n];
        int ans=0;
        for(int i=0;i<n;i++){

            if(vis[i]==0){
                dfs(m,vis,i);
                ans++;
            }

        }
        return ans;
        

    }
}
//     1 2 3
// 1   1 1 0
// 2   1 1 0
// 3   0 0 1