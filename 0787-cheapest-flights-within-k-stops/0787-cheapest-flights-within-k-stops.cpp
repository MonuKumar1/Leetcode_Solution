class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        
          vector<pair<int,int>> adj[n];
        
        int len =  flights.size();
        
        for(int i=0;i<len;i++)
        {
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        } 
       
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>> > pq;
        
        vector<int>dis(n,INT_MAX),vk(n,INT_MIN);
        dis[src]=0;
        pq.push({0,src,k+1});//dis,dist,stops left
        vk[src]=k+1;
        
        
        while(!pq.empty())
        {
            int cur_dis=pq.top()[0];
            int cur_node=pq.top()[1];
            int cur_k=pq.top()[2];
            
            pq.pop();
            
            
            
            if(cur_k<=0)continue;
            else if(cur_k<vk[cur_node])continue;
            
            vk[cur_node] = cur_k;
            
            for(auto it:adj[cur_node])
            {
                if(dis[it.first]>cur_dis+it.second)
                {
                    dis[it.first]=cur_dis+it.second;
                    pq.push({dis[it.first],it.first,cur_k-1});
                    // vk[cur_node]=cur_k-1;
                    // vk[it.first]=cur_k-1;
                }
                else if(vk[it.first]<cur_k-1)
                {
                     pq.push({cur_dis+it.second,it.first,cur_k-1});
                    
                }
            }
        }
        
        return dis[dst]==INT_MAX?-1:dis[dst];
        
        
    }
};