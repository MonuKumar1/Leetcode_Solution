import java.util.*;

class Solution {
    List<String> ans;
    
    void solve(String s, int ind, List<String> temp, Set<String> dict) {
        if (ind == s.length()) {
            StringBuilder strt = new StringBuilder();
            for (String x : temp) {
                strt.append(x).append(" ");
            }
            ans.add(strt.toString().trim());
            return;
        }

        for (int i = ind; i < s.length(); i++) {
            String str = s.substring(ind, i + 1);
            
            if (dict.contains(str)) {
                temp.add(str);
                solve(s, i + 1, temp, dict); 
                temp.remove(temp.size() - 1); 
            }
        }
    }

    public List<String> wordBreak(String s, List<String> wordDict) {
        ans = new ArrayList<>();
        Set<String> dict = new HashSet<>(wordDict); 
        List<String> temp = new ArrayList<>();
        solve(s, 0, temp, dict);
        return ans;
    }
}