class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        
        HashMap<Integer,Integer>mp=new HashMap<>();

        for(int x:nums){
            mp.merge(x,1,Integer::sum);
        }
        PriorityQueue<int[]>pq = new PriorityQueue<>((e1,e2)->e2[0]-e1[0]);

        for(var entry:mp.entrySet()){
            pq.offer(new int[]{entry.getValue(),entry.getKey()});
        }
        int ans[] = new int[k];

        for(int i=0;i<k;i++){
            ans[i]=pq.peek()[1];
            pq.poll();
        }
        return ans;


    }
}