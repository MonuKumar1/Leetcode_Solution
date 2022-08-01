// class Solution {
// public:
//     int maxi;
//     void bfs(vector<pair<int,int>>adj[],int i,int k,int n)
//     {
        
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
//         pq.push({0,i});
//         vector<int>dis(n,INT_MAX);
        
//         dis[i]=0;
        
//         while(pq.size()){
            
//             int node= pq.top().second;
//             int cur_dis= pq.top().first;
//             pq.pop();
            
            
//             for(auto it:adj[node])
//             {
//                 int cur_node =it.first;
//                 int wt=it.second;
                
//                 if(dis[cur_node]>wt+cur_dis)
//                 {
                    
//                     dis[cur_node]=wt+cur_dis;
                    
//                     pq.push({dis[cur_node],cur_node});
//                 }
                
//             }
           
            
            
            
//         }
//          int cnt=0;
//             for(int i=0;i<n;i++)
//             {
//                 // cout<<dis[i]<<" ";
//                 if(dis[i]<=k and dis[i]!=1)
//                     cnt+=1;
//             }
//             // cout<<cnt<<endl;
//         // cout<<endl;
//         cnt--;
//         // cout<<k<<endl;
//         // cnt--;
//             maxi=max(maxi,cnt);
        
//     }
    
//     int findTheCity(int n, vector<vector<int>>& edges, int k) {
        
        
//         vector<pair<int,int>>adj[n];
        
//         for(int i=0;i<edges.size();i++)
//         {
//             adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
//             adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
//         }
        
//          maxi=-1;
        
//         for(int i=0;i<n;i++)
//         {
//             // int cnt=0;
            
//             bfs(adj,i,k,n);
//             // maxi=max(cnt,maxi);
            
//         }
        
//         return maxi;
    
        
        
        
//     }
// };

class Solution {
public:
    unordered_map<int, vector<pair<int, int>>> hash;
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        for(auto& a: edges){
            hash[a[0]].push_back({a[1], a[2]});
            hash[a[1]].push_back({a[0], a[2]});
        }
        int result = 1e9, ans = -1;
        for(int i = 0; i < n; i++){
            int found = dijkstra(i, n, distanceThreshold);
            if(found <= result)
                result = found, ans = i;
        }
        return ans;
    }
    int dijkstra(int& i, int& n, int& dt){
        vector<int> dist(n, INT_MAX);
        dist[i] = 0;
        priority_queue<pair<int, int>> pq;
        pq.push({0, i});
        while(!pq.empty()){
            auto [cost, node] = pq.top();
            pq.pop();
            for(auto& a: hash[node]){
                int b = cost + a.second;
                if(dist[a.first] > b){
                    dist[a.first] = b;
                    pq.push({b, a.first});
                }
            }
        }
        int count = 0;
        for(int j = 0; j < n; j++)
            count += dist[j] <= dt;
        return count;
    }
};