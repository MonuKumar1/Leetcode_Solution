class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int row = matrix.size(), col = matrix[0].size();
        int cnt=1;
        // init four pointer
        int top = 0, bottom = row - 1, left = 0, right = col - 1;
        
        // init direction 
        int direction = 0;
        
       
        
        // logic:
        while(top <= bottom and left <= right)
        {
            
            if(direction == 0)
            {
                // move left to right
                for(int i = left; i <= right; i++)
                {
                    matrix[top][i]=cnt++;
                }
                top++;                
            }
            
            if(direction == 1)
            {
                // move top to down
                for(int i = top; i <= bottom; i++)
                {
                    matrix[i][right]=cnt++;
                }
                right--;                
            }

            
            if(direction == 2)
            {
                // move right to left
                for(int i = right; i >= left; i--)
                {
                    matrix[bottom][i]=cnt++;
                }
                bottom--;                
            }

            
            if(direction == 3)
            {
                // move bottom to top
                for(int i = bottom; i >= top; i--)
                {
                    matrix[i][left]=cnt++;
                }
                left++;                
            }

            
            // update direction
            direction++;
            direction %= 4;
        }
        
        // answer
        return matrix;
    
    }
};