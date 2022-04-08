class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
          unordered_map<int , int> mp1 , mp2;
        int n=matches.size();
        for(int i=0;i<n;i++)
        {
           mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        int val;
        
        vector<int> a1 , a2;
        for(auto it=mp1.begin();it!=mp1.end();it++)
        {
             val = it->first;
            
            if(mp2.find(val)==mp2.end())
            {
                a1.push_back(val);
            }
        }
        
        for(auto it=mp2.begin();it!=mp2.end();it++)
        {
             val = it->first;
            int c=it->second;
            
             if(c==1)
             {
                 a2.push_back(val);
             }
            
            
        }
        
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        
        
        vector<vector<int>> res;
        res.push_back(a1);
        res.push_back(a2);
        
        return res;
 
        
        
        
        
        
    }
};