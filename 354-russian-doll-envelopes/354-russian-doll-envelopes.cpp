
class Solution {
public:
    static bool cmp(vector<int>&v1,vector<int>&v2)
    {
        if(v1[0]==v2[0])
            return v2[1]<v1[1];
        return v1[0]<v2[0];
        
    }
    int maxEnvelopes(vector<vector<int>>& env) {
        
        sort(env.begin(),env.end(),cmp);
        
        int n=env.size();
        
         vector<int>v={env[0][1]};
        // vector
            
            for(int i=0;i<env.size();i++)
            {
                if(env[i][1]>v.back())
                    v.push_back(env[i][1]);
                else{
                    int ind=lower_bound(v.begin(),v.end(),env[i][1])-v.begin();
                    v[ind]=env[i][1];
                }
            }
            return v.size();
        
    }
};
