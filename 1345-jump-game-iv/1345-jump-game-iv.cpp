class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        vector<vector<int>>adj;
        int n=arr.size();
        unordered_map<int,vector<int>>mp;
       
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]].push_back(i);
        }
        vector<bool>vis(n,0);
        vis[0]=true;
        int count=0;
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int l=q.size();
            while(l--)
            {
                int temp=q.front();
                q.pop();
                if(temp==n-1)return count;
                
                vector<int>&v=mp[arr[temp]];
                
                if(temp>0)v.push_back(temp-1);
                if(temp<n-1)v.push_back(temp+1);
                for(int x:v)
                {
                    if(!vis[x])
                    {
                        vis[x]=true;
                        q.push(x);
                    }
                }
                
                v.clear();
            }
            count++;
        }
       return count;
    }
};