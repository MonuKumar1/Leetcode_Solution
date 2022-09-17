class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.find(a)!=m.end()) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};