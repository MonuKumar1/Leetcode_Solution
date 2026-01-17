class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const long long MOD = 1000000007;
        
       
        vector<long long> arr;
        for(int i = 0; i < 32; i++){
            if(n & (1 << i))
                arr.push_back((1LL << i) % MOD);
        }
        
        int m = arr.size();
        vector<long long> pref(m);
        if(m > 0){
            pref[0] = arr[0];
            for(int i = 1; i < m; i++){
                pref[i] = (pref[i-1] * arr[i]) % MOD;
            }
        }

        vector<int> ans;
        for(auto &q : queries){
            int l = q[0], r = q[1];
            if(l == 0){
                ans.push_back(pref[r] % MOD);
            } else {
                long long num = pref[r];
                long long den = pref[l-1];
                ans.push_back(
                    (int)(num * modInv(den, MOD) % MOD)
                );
            }
        }
        return ans;
    }

//fermets---- go through once more
    long long modInv(long long x, long long MOD){
        long long res = 1, p = MOD - 2;
        while(p){
            if(p & 1) res = (res * x) % MOD;
            x = (x * x) % MOD;
            p >>= 1;
        }
        return res;
    }
};
