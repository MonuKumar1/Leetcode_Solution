class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         
        vector<vector<int>> result(k);
        
        priority_queue<vector<int>> maxHeap;
       
        for (auto& p : points) {
            int x = p[0], y = p[1];
            maxHeap.push({x*x + y*y, x, y});
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        
        for (int i = 0; i < k; ++i) {
            vector<int> top = maxHeap.top();
            maxHeap.pop();
            result[i] = {top[1], top[2]};
        }
        
        return result;
        
//         multimap<int,vector<int>>mp;
         
        
//         for(int i=0;i<p.size();i++)
//         {
            
//             int temp=p[i][0]*p[i][0]+p[i][1]*p[i][1];;
//             vector<int>t={p[i][0],p[i][1]};
//             // tm[temp]={p[i][0],p[i][1]};
//             pair<int,vector<int>>tm=make_pair(temp,{p[i][0],p[i][1]});
//             mp.insert(tm);
//         }
//         int i=0;
//         vector<vector<int>>ans;
//         // sort(mp.begin(),mp.end());
//         for(auto it:mp)
//         {
//             ans.push_back(it.second);i++;
//             if(i>=k)break;
//         }
        
//         return ans;
               
        
    }
};