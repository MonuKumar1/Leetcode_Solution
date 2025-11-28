class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(), cit.end());
        int n = cit.size();
        int l = 0, r = n - 1;
        int ans = 0;

        while (l <= r) {
            int m = l + (r - l) / 2;
            int count = n - m;

            if (cit[m] >= count) {
                ans = count;    
                r = m - 1;      
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};
