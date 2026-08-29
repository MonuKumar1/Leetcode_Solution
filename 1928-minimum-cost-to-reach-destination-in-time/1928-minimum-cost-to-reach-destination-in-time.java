import java.util.*;

class Solution {
    public int minCost(int maxTime, int[][] edges, int[] passingFees) {
        int n = passingFees.length;
        
        List<int[]>[] adj = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            adj[i] = new ArrayList<>();
        }
        
        for (int[] edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int t = edge[2]; 
            adj[u].add(new int[]{v, t});
            adj[v].add(new int[]{u, t});
        }
        

        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> Integer.compare(a[0], b[0]));
        pq.offer(new int[]{passingFees[0], 0, 0});

        int[] minTime = new int[n];
        Arrays.fill(minTime, Integer.MAX_VALUE);
        minTime[0] = 0;
        
        while (!pq.isEmpty()) {
            int[] curr = pq.poll();
            int fee = curr[0];
            int time = curr[1];
            int u = curr[2];
            

            if (u == n - 1) {
                return fee;
            }
            
            for (int[] next : adj[u]) {
                int v = next[0];
                int nextTime = time + next[1];
                int nextFee = fee + passingFees[v];

                if (nextTime <= maxTime && nextTime < minTime[v]) {
                    minTime[v] = nextTime;
                    pq.offer(new int[]{nextFee, nextTime, v});
                }
            }
        }
        
        return -1; 
    }
}