class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {

        int q = shifts.size();
        int n = s.size();
        vector<int> da(n);

        for (int i = 0; i < q; i++) {
            // int p = shifts[i][2];
            if (shifts[i][2] == 0) {
                da[shifts[i][0]]--;
                if (shifts[i][1] + 1 < n)
                    da[shifts[i][1] + 1]++;
            } else {
                da[shifts[i][0]]++;
                if (shifts[i][1] + 1 < n)
                    da[shifts[i][1] + 1]--;
            }
        }
        // cout << da[0] << " ";
        for (int i = 1; i < n; i++) {
            da[i] += da[i - 1];
            // cout << da[i] << " ";
        }
        for (int i = 0; i < n; i++) {
            if (da[i] > 0) {
                int pt = da[i] % 26;
                if (s[i] + pt <= 'z')
                    s[i] = s[i] + pt;
                else {
                    int x = s[i] + pt - 'z';
                    s[i] = 'a' + x - 1;
                }

            } else if (da[i] < 0) {
                int pt = abs(da[i]) % 26;
                if (s[i] - pt >= 'a')
                    s[i] = s[i] - pt;
                else {       
                    //  b-4 -'a' =3
                    int x = s[i] - pt - 'a'; //3
                    // cout<<x<<endl;
                    s[i] = 'a' + (26 +x);

                }
                // a = a+
            }
            // else s
        }
        // cout << s << endl;
        return s;
    }
};

// -1,-1,0
// -1,0,1
// 0,1,2

// -1,0,1
// -1,1,1
