class Solution {
public:
    int longestSubsequence(vector<int>& arr, int dif) {
        
         int res = 1;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i++)
            mp[arr[i]] = mp[arr[i]-dif]+1;
        
        for(auto it : mp)
            res = max(res,it.second);
        return res;
        
        
        
    }
};