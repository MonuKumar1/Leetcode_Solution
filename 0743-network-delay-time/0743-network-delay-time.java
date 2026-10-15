class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {
        
        List<List<int[]>>lst = new ArrayList<>();

        for(int i=0;i<=n;i++){
            lst.add(new ArrayList<>());
        }

        for(int [] num : times){

            lst.get(num[0]).add(new int[]{num[1],num[2]});
        }

        Queue<int[]> q = new LinkedList<>();

        q.offer(new int[]{k,0});
        int[] distArr = new int[n+1];
        Arrays.fill(distArr,Integer.MAX_VALUE);
        distArr[k]=0;

        while(!q.isEmpty()){
            
            int[] node = q.peek();
            q.poll();
            int dist = node[1];
            List<int[]> nodelst = lst.get(node[0]);

            for(int[] x: nodelst){

                int node2 = x[0];
                int dist2 = x[1];
                if(distArr[node2]>dist2+dist){

                    distArr[node2]= dist2+dist;

                    q.offer(new int[]{node2,dist2+dist});
                }
                
            }
        }
        int ans =0,cnt=0;;
        for(int x : distArr){
            if(cnt==0){
                cnt++;continue;
            }
            // System.out.println(x+ " ");
            if(x==Integer.MAX_VALUE)return -1;

            ans = Math.max(x,ans);
        }
        return ans;

    }
}