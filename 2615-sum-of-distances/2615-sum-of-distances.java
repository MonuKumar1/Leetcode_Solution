class Solution {
    public long[] distance(int[] nums) {
        int n = nums.length;
        Map<Integer, List<Integer>> mp = new HashMap<>();
        for (int i = 0; i < n; i++) {
            mp.putIfAbsent(nums[i],new ArrayList<>());
            mp.get(nums[i]).add(i);
        }
        long[] ans = new long[n];
        for (List<Integer> pos : mp.values()) {

            long sum = 0;
            for (int x : pos) sum += x;

            long leftSum = 0;
            int m = pos.size();

            for (int i = 0; i < m; i++) {
                long rightSum = sum - leftSum - pos.get(i);

                long left  = (long) pos.get(i) * i - leftSum;
                long right = rightSum - (long) pos.get(i) * (m - i - 1);

                ans[pos.get(i)] = left + right;

                leftSum += pos.get(i);
            }
        }

        return ans;
    }
}