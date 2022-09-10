class Solution {
public:
    // partition array minimum difference
    
    int lastStoneWeightII(vector<int>& stones) {
        
        
    
        int n = stones.size();
        int sum = 0; 
        for (int i = 0; i < n; i++)
            sum += stones[i];
     
        bool t[n + 1][sum + 1];
     
        
        for (int i = 0; i <= n; i++)
            t[i][0] = true;
     
        for (int i = 1; i <= sum; i++)
            t[0][i] = false;
     
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (stones[i - 1] <= j)
                    t[i][j] = t[i - 1][j - stones[i - 1]] || t[i- 1][j];
                else
                     t[i][j] = t[i - 1][j];
             }
        }
      
        int diff = INT_MAX;
         
        for (int j = sum/2; j >= 0; j--)
        {
            if (t[n][j] == true)
              diff = min(diff, sum - 2*j);
        }
        
        return diff;
        
    }
};