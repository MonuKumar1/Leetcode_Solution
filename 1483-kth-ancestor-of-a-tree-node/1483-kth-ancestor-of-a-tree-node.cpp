class TreeAncestor {
public:
    vector<vector<int>>P;
    TreeAncestor(int n, vector<int>& parent) {
        P.resize(26,vector<int>(n,-1));
        
        for(int i=0;i<parent.size();i++)
        {
            P[0][i]=parent[i];
        }
        
        for(int i=1;i<26;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a=P[i-1][j];
               if(a!=-1) P[i][j]= P[i-1][a];
            }
        }
        
        
    }
    
    int getKthAncestor(int node, int k) {
        int i=0;
        while(k>0){
            
            if(k & 1)
            {
                if(node!=-1){
                    node=P[i][node];
                }
            }
            i++;
            k>>=1;
        }
        return node;
        
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */