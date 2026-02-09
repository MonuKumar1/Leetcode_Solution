class Solution {
    public void rotate(int[][] m) {
        int n = m.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            int left = 0, right = n - 1;
            while (left < right) {
                int temp = m[i][left];
                m[i][left] = m[i][right];
                m[i][right] = temp;
                left++;
                right--;
            }
        }
    }
}
