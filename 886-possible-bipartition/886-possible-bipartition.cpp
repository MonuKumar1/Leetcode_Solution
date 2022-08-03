class Solution {
public:
 bool possibleBipartition(int n, vector<vector<int>>& vec) {
     
     
     vector<int> adj[n+1];
     
     for(int i =0;i<vec.size();i++)
     {
         adj[vec[i][0]].push_back(vec[i][1]);
         adj[vec[i][1]].push_back(vec[i][0]);
     }
     
     queue<int>q;
     vector<int>color(n+1,0),vis(n+1,0);
     for(int i=1;i<=n;i++)
     {
        if(vis[i]==0) {
        color[i]=0;
         vis[i]=1;
            
     q.push(i);
         
         while(!q.empty())
         {

             int node=q.front();q.pop();
             // cout<<node<<endl;
             for(auto x:adj[node])
             {
                 if(vis[x] )
                     {if( color[x]==color[node])return false;}

                 else {color[x]=1-color[node];
                      vis[x]=1;
                      q.push(x);
                       // cout<<"HII"<<endl;
                      }

    


             }

         }
        
        }
     }
     
     return true;
     
    
     
        
        
    }
};