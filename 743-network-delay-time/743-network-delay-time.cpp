class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<pair<int,int>>adj[n+1];
        
        for(int i=0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        vector<int>dis(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        dis[k]=0;
        pq.push({0,k});
        
        while(pq.size()){
            
            int node= pq.top().second;
            int cur_dis= pq.top().first;
            pq.pop();
            
            
            for(auto it:adj[node])
            {
                int cur_node =it.first;
                int wt=it.second;
                
                if(dis[cur_node]>wt+cur_dis)
                {
                    dis[cur_node]=wt+cur_dis;
                    
                    pq.push({dis[cur_node],cur_node});
                }
                
            }
            
            
        }
        
        int ans =*max_element(dis.begin()+1,dis.end());
        
        return ans==INT_MAX?-1:ans;
        
        
    }
};