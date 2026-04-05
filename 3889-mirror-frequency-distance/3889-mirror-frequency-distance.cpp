class Solution {
public:
    int mirrorFrequency(string s) {

        string s1 = "abcdefghijklmnopqrstuvwxyz";
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        string s3 = "0123456789";
        string s4 = s3;
        reverse(s4.begin(), s4.end());
        set<char>st;
        map<char, int> mp;
        for (auto x : s)
            mp[x]++;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if(st.find(s[i])!=st.end())continue;
            if (s[i] >= 'a' and s[i] <= 'z') {
                int freqc = mp[s1[s[i] - 'a']];
                int freqm = mp[s2[s[i] - 'a']];
                st.insert(s1[s[i] - 'a']);
                st.insert(s2[s[i] - 'a']);
                int cnt = abs(freqc - freqm);
                ans += cnt;
            } else {
                int freqc = mp[s3[s[i] - '0']];
                int freqm = mp[s4[s[i] - '0']];
                st.insert(s3[s[i] - '0']);
                st.insert(s4[s[i] - '0']);
                int cnt = abs(freqc - freqm);
                ans += cnt;

            }
            // if(mp[s1[s[i]-'a']])
        }

        return ans;
    }
};