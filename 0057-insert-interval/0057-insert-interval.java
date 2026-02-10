class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {

        // Convert array to list
        List<int[]> it = new ArrayList<>(Arrays.asList(intervals));
        it.add(newInterval);

        // Add new interval
        it.add(newInterval);

        // Sort by start time
        Collections.sort(it, (a, b) -> Integer.compare(a[0], b[0]));

        List<int[]> ans = new ArrayList<>();
        int[] temp = it.get(0);

        for (int i = 1; i < it.size(); i++) {
            if (temp[1] >= it.get(i)[0]) {
                temp[1] = Math.max(temp[1], it.get(i)[1]);
            } else {
                ans.add(temp);
                temp = it.get(i);
            }
        }

        ans.add(temp);

        return ans.toArray(new int[ans.size()][]);
    }
}
