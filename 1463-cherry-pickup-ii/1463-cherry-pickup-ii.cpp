// class Solution {
// public:
//     int solve( vector<vector<int>>grid, vector<vector<int>>vis,int r,int c1,int c2)
//     {
//         int n=grid.size(),m=grid[0].size();
//         if(r>=n || c1>=m || c2>=m || c1<0 || c2<0 || vis[r][c1] || vis[r][c2])
//             return 0;
//         vis[r][c1]=1;
//         vis[r][c2]=1;
     
        
//        vector<int>dir={-1,0,1};
        
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 int robo1=dir[i];
//                 int robo2=dir[j];
//                 if(r+1<n and c1+robo1>=0 and c1+robo1<m and c2+robo2>=0 and c2+robo2<m)
                    
//                { if(robo1!=robo2)return grid[r+1][c1+robo1]+grid[r+1][c2+robo2]+solve(grid,vis,r+1,c1+robo1,c2+robo2);
//                 else return grid[r+1][c2+robo2]+solve(grid,vis,r+1,c1+robo1,c2+robo1);}
                    
//             }
//         }
        
//       return 0;  
        
//     }
    
//     int cherryPickup(vector<vector<int>>& grid) {
        
//         int n=grid.size();
//         int m=grid[0].size();
        
//         vector<vector<int>>vis(n,vector<int>(m,0));
        
//         int i1=0,j1=0,i2=0,j2=m-1;
        
//         int ans=  solve(grid,vis,i1,j1,j2);
        
//         return ans;
        
        
        
        
//     }
// };
class Solution {
public:

int dp[71][71][71];

int func(vector<vector<int>>&grid,int r1,int c1,int c2){
    
    int r2=r1;
    
    if(r1>=grid.size() || r2>=grid.size() || c1<0 || c2<0 || c1>=grid[0].size() || c2>=grid[0].size()){
        return INT_MIN;
    }
    
    if(dp[r1][c1][c2]!=-1){
        return dp[r1][c1][c2];
    }
    
    
    if(r1==grid.size()-1){
        
        if(c1==c2){
            return grid[r1][c1];
        }
        
        else{
            return grid[r1][c1]+grid[r1][c2];
        }
        
    }
    
    
    int cherry=0;
    
    if(c1==c2){
        cherry+=grid[r1][c1];
    }

    
    else{
        cherry+=grid[r1][c1];
        cherry+=grid[r1][c2];
    }
    
    
    int maxcherry=0;
    
    for(int i=-1;i<=1;i++){
        
        for(int j=-1;j<=1;j++){
            
            maxcherry=max(maxcherry,func(grid,r1+1,c1+i,c2+j));
            
        }
        
    }
    
    return dp[r1][c1][c2]=cherry+maxcherry;
    
}

int cherryPickup(vector<vector<int>>& grid) {
    
    int m=grid.size();
    int n=grid[0].size();
    
    memset(dp,-1,sizeof(dp));
    
    int ans=func(grid,0,0,n-1);
    
    return ans;
    
}
};