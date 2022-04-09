class Solution {
public:
      vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>maxheap;
        
        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        for(auto i : mp) maxheap.push(make_pair(i.second,i.first));
        
        while(k--){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return ans;
    }

//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//             mp[nums[i]]++;
//       vector<pair<int,int>>p;
//         for(auto it=mp.begin();it!=mp.begin();it++)
//         {
//             p.push_back(make_pair(it->second,it->first));
//         }
//         sort(p.begin(),p.end());
//         vector<int>v;
        
//         for(int i=p.size()-1;i>=p.size()-k;i--)
//         {
//             v.push_back(p[i].second);
//         }
//         return v;
//     }
};