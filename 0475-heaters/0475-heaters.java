class Solution {
    //
    public int findRadius(int[] hs, int[] ht) {

        int n = ht.length;
        int j = 0;
        int ans = Integer.MIN_VALUE;
        Arrays.sort(hs);
        Arrays.sort(ht);
        for (int i = 0; i < hs.length; i++) {
            int x = Math.abs(hs[i] - ht[j]);

            while (j < n - 1 && x >= Math.abs(hs[i] - ht[j + 1])) {

                x = Math.abs(hs[i] - ht[j + 1]);
                j++;

            }
            if (x >= ans) {
                ans = x;
            }

        }

        return ans;

    }
}