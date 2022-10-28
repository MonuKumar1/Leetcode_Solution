class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> v;
        map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
            
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            v.push_back(itr->second);
            
        }
        return v;
    }
};