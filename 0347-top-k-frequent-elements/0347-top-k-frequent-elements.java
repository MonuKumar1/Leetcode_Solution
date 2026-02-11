class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        Map<Integer, Integer> mp = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int x_freq = mp.getOrDefault(nums[i], 0);
            mp.put(nums[i], x_freq + 1);
        }

        Queue<int[]> pq = new PriorityQueue<>((int[] e1, int[] e2) -> {
            return e1[1] - e2[1];
        });

        mp.forEach((element, freq) -> {
            if (pq.size() < k) {
                pq.add(new int[] { element, freq });
            } else {
                int[] top_el = pq.peek();
                if (top_el[1] < freq) {
                    pq.poll();
                    pq.add(new int[] { element, freq });
                }
            }
        });

        // while(pq.size() > 0) {
        //     int[] val = pq.peek();
        //     System.out.println( val[0] + ": " + val[1]);
        //     pq.poll();
        // }

        int[] ans = new int[k];
        int i=0;
        while(pq.size()>0) {
            int[] val = pq.peek();
            ans[i] = val[0];
            pq.poll();
            i++;
        }

        return ans;

    }
}