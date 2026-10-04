class Solution {
    public boolean canFinish(int nc, int[][] ps) {

        List<List<Integer>> lst = new ArrayList<>();
        int indegree[] = new int[nc];

        int n = ps.length;
        for (int i = 0; i < nc; i++) {
               lst.add(new ArrayList<>());
        }

        for (int i = 0; i < n; i++) {
            int a = ps[i][0], b = ps[i][1];
            lst.get(b).add(a);
            indegree[a]++;
        }
        Queue<Integer>q = new LinkedList<>();
        for(int i=0;i<nc;i++){
            if(indegree[i]==0){
                q.offer(i);
            }
        }
        int cnt=0;
        while(!q.isEmpty()){

            int x = q.poll();
            cnt++;
            for(Integer node : lst.get(x)){
                indegree[node]--;
                if(indegree[node]==0)q.offer(node);
            }
        }
        return cnt==nc;

    }
}