class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int m=matrix.size();
        vector<int> col(n,1);
        vector<int> row(m,1);
        // int col[n]={1};int row[m]={1};
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    col[j]=0;row[i]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
        { 
           int x=0;
            if(row[i]==0)
            {
                while(x<n)
                {
                    matrix[i][x]=0;x++;
                }
            }
        }
        for(int i=0;i<n;i++)
        { 
           int x=0;
            if(col[i]==0)
            {
                while(x<m)
                {
                    matrix[x][i]=0;x++;
                }
            }
        }
        
        
        
        
        
    }
};