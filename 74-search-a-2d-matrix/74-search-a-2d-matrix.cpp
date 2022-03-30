class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=n-1;
        if(n==1)
        {
            for(int k=0;k<m;k++)
                if(matrix[k][0]==target)return true;
            return false;
            
        }
        if(m==1)
        {
            for(int k=0;k<n;k++)
                if(matrix[0][k]==target)return true;
            return false;
        }
        while(i<m and j>=0)
        {
            if(matrix[i][j]==target)return true;
            if(matrix[i][j]>target)j--;
            else if(matrix[i][j]<target) i++;
        }
        return false;
        
    }
};