class Solution {
public:
    void topoSort(vector<int>& result , vector<vector<int>>& data , int& k)
    {
        vector<vector<int>>adj(k+1);
        vector<int>indeg(k+1 , 0);
        for(auto& d : data)
        {
            adj[d[0]].push_back(d[1]);
            indeg[d[1]]++;
        }
        queue<int>q;
        for(int i = 1; i <= k ; i++)
        {
            if(indeg[i] == 0)
                q.push(i);
        }
        while(q.size())
        {
            int top = q.front(); q.pop();
            result.push_back(top);
            for(auto& nbr : adj[top])
            {
                indeg[nbr]--;
                if(indeg[nbr] == 0)
                    q.push(nbr);
            }
        }
    }
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        
        vector<int>rowOrder;
        vector<int>colOrder;
        topoSort(rowOrder , rowConditions , k);
        topoSort(colOrder , colConditions , k);
        if(rowOrder.size() != k) return {};
        if(colOrder.size() != k) return {};
        
        vector<vector<int>>ans(k , vector<int>(k , 0));
        
        unordered_map<int , int>rowno; //stores the rowno of number
        for(int i = 0 ; i < k ; i++)
        {
            rowno[rowOrder[i]] = i;
        }
        for(int j = 0 ; j < k ; j++)
        {
            ans[rowno[colOrder[j]]][j] = colOrder[j];
        }
        return ans;
    }
};