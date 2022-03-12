class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
       int steps=0;
        int n=g.size();
        vector<vector<int>>directions={{1,1}, {0,1}, {1,0}, {0,-1}, 
                                       {-1,0},{-1, -1},{1, -1},{-1, 1}};
        if (g[0][0] != 0 || g[n-1][n-1] != 0) return -1;
        
        queue<pair<int, int>> q;
        q.push({ 0, 0 });
        g[0][0]=1;
        
          while (!q.empty()) {
              
                auto curr=q.front();
                q.pop();
                int x = curr.first, y = curr.second;
              
              if(x==n-1 and y==n-1)return g[x][y];
              
               for(auto direction : directions){
                int nx = x + direction[0];
                int ny = y + direction[1];
                if(nx >= 0 && nx <n && ny >= 0 && ny < n && g[nx][ny] == 0){
                    q.push(make_pair(nx,ny));
                     steps++;
                  g[nx][ny] = g[x][y] + 1;
             }
        }
              
              
              
          }
          return -1;
    }
};
//https://leetcode.com/problems/shortest-path-in-binary-matrix/discuss/312814/simple-BFS-C%2B%2B