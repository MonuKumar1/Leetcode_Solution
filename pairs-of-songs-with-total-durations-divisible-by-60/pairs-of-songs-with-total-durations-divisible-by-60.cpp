class Solution {
public:
//     int numPairsDivisibleBy60(vector<int>& time) {
        
        
//         int n=time.size();
//         for(int x:time)
//             cout<<x%60<<" ";
//         cout<<endl;
        
//         int count=0;
//         vector<int>dp(60,0);
        
//         for(int i=0;i<n;i++)
//             dp[time[i]%60]++;
//         count+=dp[0];
//         for(int i=1;i<30;i++)
//         {
//             // if((dpp[60-i])%60==0)
//             while(dp[i] and dp[60-i] and dp[60-i]>=dp[i])
//             { 
//                  // dp[i]--;
//                 dp[60-i]--;
//                 count++;
//                 cout<<"hi "<<i<<" "<<60-i<<endl;
//             }
//         }
//         count+=(dp[30]/2);
  
//         return count;
//     }

  int numPairsDivisibleBy60(vector<int>& time)
    {
        int count=0;
        vector<int>v(60,0);
        for(int i=0;i<time.size();i++)
        {
            int a=time[i]%60;
            if(a==0)
                count+=v[0];
            else
                count+=v[60-a];
            v[a]++;
        }
        return count;
    }


};