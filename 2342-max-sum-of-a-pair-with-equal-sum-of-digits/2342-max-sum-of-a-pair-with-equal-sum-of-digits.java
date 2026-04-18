import java.util.*;

class Solution {

    public int maximumSum(int[] nums) {

        HashMap<Integer, ArrayList<Integer>> mp = new HashMap<>();

        for (int x : nums) {

            int digitSum = solve(x);

            if (mp.containsKey(digitSum)) {
                mp.get(digitSum).add(x);
            } 
            else {
                ArrayList<Integer> list = new ArrayList<>();
                list.add(x);
                mp.put(digitSum, list);
            }
        }

        int ans = -1;

        for (Map.Entry<Integer, ArrayList<Integer>> entry : mp.entrySet()) {

            ArrayList<Integer> arr = entry.getValue();
            Collections.sort(arr);

            if (arr.size() < 2) continue;

            int n = arr.size();
            ans = Math.max(ans, arr.get(n - 1) + arr.get(n - 2));
        }

        return ans;
    }

    int solve(int x) {

        int res = 0;

        while (x > 0) {
            res += x % 10;
            x /= 10;
        }

        return res;
    }
}