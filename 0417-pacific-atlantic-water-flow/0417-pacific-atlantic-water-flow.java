class Solution {
    // int[][] vis1,vis2;
  public void  solve(int[][] h,int[][] vis,int i,int j,int flag){
            if(i<0 || j<0||i>=h.length || j>=h[0].length || vis[i][j]!=0 )return ;
            
            vis[i][j]=flag;
            // System.out.println("vis[i][j] "+flag);
            int[][] dir = {{-1,0},{0,1},{0,-1},{1,0}};

            for(int[] x: dir){
                int r = i+x[0];
                int c = j+x[1];
                if(r>=0 && c>=0 && r<h.length && c<h[0].length && h[i][j]<=h[r][c])
                solve(h,vis,r,c,flag);
            }
            

        }

    public List<List<Integer>> pacificAtlantic(int[][] h) {

        int n = h.length;
        int m = h[0].length;

       int [][] vis1 = new int[n][m];
        int [][] vis2 = new int[n][m];

        //pacific
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0)
                    if (vis1[i][j]==0) {
                        solve(h, vis1, i, j, 1);
                    }
            }
        }

        // atlantic
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == n-1 || j == m-1)
                    if (vis2[i][j]==0) {
                        solve(h, vis2, i, j, 2);
                    }
            }
        }

        // for(int[] x:vis1){
            // System.out.println(vis1);
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         System.out.print(vis1[i][j]+" ");
        //     }
        //      System.out.println();

        // }
        // System.out.println();System.out.println();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         System.out.print(vis2[i][j]+" ");
        //     }
        //      System.out.println();

        // }


        List<List<Integer>> ans = new ArrayList<>();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis1[i][j] ==1  && vis2[i][j]==2){
                    ans.add(List.of(i, j));
                }
            }
        }
        return ans;

    }
}