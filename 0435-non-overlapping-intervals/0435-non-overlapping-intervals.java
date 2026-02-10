class Solution {
    public int eraseOverlapIntervals(int[][] it) {
        
       if (it.length == 0) return 0;
        Arrays.sort(it, (a, b) -> Integer.compare(a[1], b[1]));
        int temp[] = it[0];
        int ans=0;
        for(int i=1;i<it.length;i++){

            if(temp[1]>it[i][0]){
                ans++;
                 temp[1]= Math.min(it[i][1],temp[1]);
            }
            else temp = it[i];
        }
        return ans;
    }
}