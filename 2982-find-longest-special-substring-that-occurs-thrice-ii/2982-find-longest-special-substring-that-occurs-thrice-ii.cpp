class Solution {
public:
    int maximumLength(string s) {
          int n = s.length();
        map<char, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            int cnt = 1;

            while (i + 1 < n && ch == s[i + 1]) {
                i++;
                cnt++;
            }
            mp[ch].push_back(cnt);
        }

        int ans = -1;

        for (auto &x : mp) {
            vector<int> v = x.second;
            int sz = v.size();
            sort(v.begin(), v.end());

            ans = max(ans, v[sz-1] - 2);
            //n - L+1, here we want last elemenent to contribute 2 occurances!
            if (sz >= 2) {
                ans = max(ans, min(v[sz-1] - 1, v[sz-2]));
            }

            if (sz >= 3) {
                ans = max(ans, min({v[sz-1], v[sz-2], v[sz-3]}));
            }
        }

        return ans <= 0 ? -1 : ans;
    }
};