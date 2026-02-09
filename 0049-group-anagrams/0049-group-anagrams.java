class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        Map<String, List<String>> mp = new HashMap<>();

        for (int i = 0; i < strs.length; i++) {

            char[] temp = strs[i].toCharArray(); 
            Arrays.sort(temp);
            String key = new String(temp);

            mp.putIfAbsent(key, new ArrayList<>());
            mp.get(key).add(strs[i]);
        }

        List<List<String>> ans = new ArrayList<>();

        for (List<String> group : mp.values()) {
            ans.add(group);
        }

        return ans;
    }
}
