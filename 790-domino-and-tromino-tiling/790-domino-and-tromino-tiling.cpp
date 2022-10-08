class Solution {
public:
    int numTilings(int N) {
        // vector<int>dp(n+1);
        // dp[1]=1;
        // dp[2]=2;
        // dp[3]=5;
        // for(int i=4;i)
 int md=1e9+7;
    
    vector<long long> v(1001,0);
    v[1]=1;
    v[2]=2;
    v[3]=5;
    if(N<=3)
        return v[N];
    for(int i=4;i<=N;++i){
        v[i]=2*v[i-1]+v[i-3]; 
        v[i]%=md;
    }
    return v[N];
    }
};