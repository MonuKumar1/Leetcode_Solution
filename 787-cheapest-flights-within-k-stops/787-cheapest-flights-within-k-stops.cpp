class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        
//         vector<int>dis(n,1e9);
//         dis[src]=0;
//         for(int i=1;i<=k;i++)
//         {
//             for(auto x:flights)
//             {
//                 int s=x[0];
//                 int d=x[1];
//                 int c=x[2];
                
//                 if(dis[d]>c+dis[s])
//                 {
//                     dis[d]=c+dis[s];
//                 }
                
//             }
            
            
            
//         }
        
//         return dis[dst]<1e9?dis[dst]:-1;
        
        vector<int> dis(n, 1e9);
        dis[src] = 0;
        
        for(int z=0; z<=k; z++){
            vector<int> t_dis(dis);
            for(auto x: flights)
                t_dis[x[1]] = min(t_dis[x[1]], dis[x[0]] + x[2]);
            dis = t_dis;
        }
        return dis[dst] == 1e9 ? -1 : dis[dst];
        
        
    }
};