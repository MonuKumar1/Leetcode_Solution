class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& e) {
        
        // for(int i=0;i<e.size();i++)
        // {
        //     for(int j=0;j<e[i].size();j++)
        //         cout<<e[i][j]<<" ";
        //     cout<<"\n";
        // }
        vector<int>ans,v(n,0);
        for(auto x:e)
            v[x[1]]=1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)ans.push_back(i);
        }
        
        
        return ans;
    }
};