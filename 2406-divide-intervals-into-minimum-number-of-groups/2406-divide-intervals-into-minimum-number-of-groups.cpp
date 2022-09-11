class Solution {
public:
    int minGroups(vector<vector<int>>& v) {
      
        sort(v.begin(),v.end());
        
        // vector<pair<int,int>>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<v.size();i++)
        {
           if(pq.size()==0)pq.push(v[i][1]);
            
            else if(pq.top()>=v[i][0])
            {
                pq.push(v[i][1]);
            }
            else{
                pq.pop();pq.push(v[i][1]);
            }
        }
        return pq.size();
        
    }
};