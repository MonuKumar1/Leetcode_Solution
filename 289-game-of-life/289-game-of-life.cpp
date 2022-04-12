class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int m=b.size();
        int n=b[0].size();
        vector<vector<int>>v=b;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int cz=0,c1=0;
                if(i-1>=0 and j-1>=0)
                {
                    if(b[i-1][j-1]==0)cz++;
                    else c1++;
                }
                 if(i>=0 and j-1>=0)
                {
                    if(b[i][j-1]==0)cz++;
                    else c1++;
                }
                 if(i+1<m and j-1>=0)
                {
                    if(b[i+1][j-1]==0)cz++;
                    else c1++;
                }
                 if(i+1<m)
                {
                    if(b[i+1][j]==0)cz++;
                    else c1++;
                }
                 if(i+1<m and j+1<n)
                {
                    if(b[i+1][j+1]==0)cz++;
                    else c1++;
                }
                 if(j+1<n)
                {
                    if(b[i][j+1]==0)cz++;
                    else c1++;
                }
                 if(i-1>=0 and j+1<n)
                {
                    if(b[i-1][j+1]==0)cz++;
                    else c1++;
                }
                 if(i-1>=0)
                {
                    if(b[i-1][j]==0)cz++;
                    else c1++;
                }
                
                if(b[i][j]==1 and c1<2)v[i][j]=0;
                if(b[i][j]==1 and (c1==2 || c1==3))v[i][j]=1;
                if(b[i][j]==1 and c1>3)v[i][j]=0;
                if(b[i][j]==0 and c1==3)v[i][j]=1;
                
            }
        }
        b=v;
    }
};