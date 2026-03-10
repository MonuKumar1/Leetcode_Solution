class Solution {

    void dfs(List<List<String>> ans, String email, Map<String, ArrayList<String>> mp, int n, Set<String> vis) {
        
        ans.get(n).add(email);
        vis.add(email);
        if (mp.get(email) == null) return;
        for (String str : mp.get(email)) {
            if (!vis.contains(str))
                dfs(ans, str, mp, n, vis);
        }

    }

    public List<List<String>> accountsMerge(List<List<String>> accounts) {

        Map<String, ArrayList<String>> mp = new HashMap<>();

        for (List<String> acc : accounts) {

            for (int i = 2; i < acc.size(); i++) {

                String a = acc.get(i);
                String b = acc.get(i - 1);

                if (mp.get(a) == null)
                    mp.put(a, new ArrayList<>());

                if (mp.get(b) == null)
                    mp.put(b, new ArrayList<>());

                mp.get(a).add(b);
                mp.get(b).add(a);
            }
        }

            Set<String> vis = new HashSet<>();
            // Map<string,int>mp;
            List<List<String>> ans = new ArrayList<>();

            for (int i = 0; i < accounts.size(); i++) {
                String name = accounts.get(i).get(0);

                String email = accounts.get(i).get(1);

                if (!vis.contains(email)) {
                    List<String> list = new ArrayList<>();
                    list.add(name);
                    ans.add(list);
                    // ans.add(new Arrays.List(name));
                    int n = ans.size()-1;
                    dfs(ans, email, mp,n, vis);
                    Collections.sort(ans.get(n).subList(1, ans.get(n).size()));
                }
            }

            return ans;

        

    }
}