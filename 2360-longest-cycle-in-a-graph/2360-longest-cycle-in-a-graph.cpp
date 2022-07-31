class Solution {
public:
    int maxi;
    vector<int>score;
    
    void dfs(vector<int>adj[],int i,vector<bool>&vis,vector<bool>&dfsVis,int cnt){
        dfsVis[i]=1;
        vis[i]=1;
         score[i]=cnt;
        // cout<<i<<" "<<cnt<<endl;
        for(auto x:adj[i])
        {
            if(vis[x]==false)
            {
               
               
                dfs(adj,x,vis,dfsVis,cnt+1);
            }
            else if(dfsVis[x])
            {
                // cnt+=1;
                // cout<<"hii"<<endl;
                maxi=max(maxi,score[i]+1-score[x]);
                
            }
            
            
           
        }
        
        dfsVis[i]=0;
        
        
        
    }
        
    int longestCycle(vector<int>& edges) {
        
        int n=edges.size();
               
        vector<int>adj[n];
        
        for(int i=0;i<n;i++){ if(edges[i]!=-1) adj[i].push_back(edges[i]); }
        
        vector<bool>vis(n),dfsVis(n);
        
        int cnt=0;
        
        maxi=-1;
        score.resize(n);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false){cnt=1;dfs(adj,i,vis,dfsVis,cnt);}
            
        }
        
        return maxi;
        
        
    }
};