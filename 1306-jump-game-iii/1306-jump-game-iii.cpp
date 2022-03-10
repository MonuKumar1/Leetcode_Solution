class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        int n=arr.size();
         if(arr[start]==0)
            return true;
        queue<int>q;
        q.push(start);
        vector<bool>visited(n,false);
        visited[start]=true;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            
            if(arr[temp]==0)return true;
            
            
            int new_ind=temp-arr[temp];           
            
            if(new_ind>=0 and visited[new_ind]==false)
            {
                if(arr[new_ind]==0)return true;
                visited[new_ind]=true;
                q.push(new_ind);
            }
            new_ind=temp+arr[temp];           
            
            if(new_ind<n and visited[new_ind]==false)
            {
                if(arr[new_ind]==0)return true;
                visited[new_ind]=true;
                q.push(new_ind);
            }
        }
        return false;
        
        
        
    }
};