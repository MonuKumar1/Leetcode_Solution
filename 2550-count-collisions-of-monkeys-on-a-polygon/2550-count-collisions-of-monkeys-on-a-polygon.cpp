class Solution {
public:
     long long MOD = 1000000007;

    long long powerFind(long long x) {
        long long base = 2, ans = 1;
        while (x > 0) {
            if (x & 1) ans = (ans * base) % MOD;
            base = (base * base) % MOD;
            x >>= 1;
        }
        return ans;
    }

    int monkeyMove(int n) {
        long long ans = (powerFind(n) - 2 + MOD) % MOD;
        return ans;
    }
};
