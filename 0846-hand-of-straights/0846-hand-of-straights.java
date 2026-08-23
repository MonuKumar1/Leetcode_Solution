class Solution {
    public boolean isNStraightHand(int[] hand, int s) {

        Map<Integer, Integer> mp = new HashMap<>();

        for (int x : hand) {
            mp.put(x, mp.getOrDefault(x, 0) + 1);
        }

        Arrays.sort(hand);

        for (int i = 0; i < hand.length; i++) {

            if (mp.get(hand[i]) > 0) {
                int val=hand[i];
                for (int k = 0; k < s; k++) {
                    if (mp.get(val) == null || mp.get(val) == 0) {
                        return false;
                    }
                    mp.put(val , mp.get(val) - 1);
                    val++;
                }
            }
        }
        return true;
    }
}