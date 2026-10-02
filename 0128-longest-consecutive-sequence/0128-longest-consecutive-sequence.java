class Solution {
    public int longestConsecutive(int[] nums) {

        HashSet<Integer> st = new HashSet<>();
        for (int x : nums) {
            st.add(x);
        }
        int n = nums.length;
        int ans = 0;
        for (int num: st) {
            if (!st.contains(num-1)) {
                int currLen = 1;
                int temp = num;
                while (st.contains(temp + 1)) {
                    temp = temp + 1;
                    currLen++;
                }
                ans = Math.max(currLen, ans);
            }
        }
        return ans;

    }
}

// 