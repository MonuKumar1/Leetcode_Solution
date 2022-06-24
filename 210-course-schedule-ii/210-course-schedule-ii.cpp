class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int>indegree(n,0);
        map<int,vector<int>>mp;
        
        
        for(int i=0;i<pre.size();i++)
        {   mp[pre[i][1]].push_back(pre[i][0]);
            indegree[pre[i][0]]++;
        
        }
        // for(auto x:indegree)cout<<x<<" ";
        
        
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                q.push(i);             
        }
        int cnt=0;
        vector<int>ans;
        while(!q.empty())
        {
            
            int x=q.front();
            q.pop();
            cnt++;
            ans.push_back(x);
            
            for(auto &p:mp[x])
            {
                indegree[p]--;
                if(indegree[p]==0)
                    q.push(p);  
                
                
            }
        }
        if(cnt==n)
       // return true;
            return ans;
        return {};
    }
};