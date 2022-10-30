//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
    
    public:

  int mod=1e9+7;

  long long res=0;

  long long dp[61][61][61];

  long long fact[183];

  long long power(long long a,long long b){

      long long ans=1;

      while(b>0){

          if(b%2)ans=(ans*a)%mod;

          a=(a*a)%mod;

          b=(b>>1);

      }

      return ans;

  }

  

  long long occ(long long a,long long b, long long c){

      long long val=(a+b+c);

      long long ans=fact[val];

      

      ans=(ans*power(fact[a],mod-2))%mod;

      ans=(ans*power(fact[b],mod-2))%mod;

      ans=(ans*power(fact[c],mod-2))%mod;

       return ans;

    }

 

  long long fun(int x,int y,int z){

      if(x==0&&y==0&&z==0)return 0;

      if(dp[x][y][z]!=-1)return dp[x][y][z];

      //811654215,

      long long ans=0,ans1=0,ans2=0;

      

      if(x>0) ans=fun(x-1,y,z)*10+(4*occ(x-1,y,z));

      if(y>0) ans1=fun(x,y-1,z)*10+(5*occ(x,y-1,z));

      if(z>0) ans2=fun(x,y,z-1)*10+(6*occ(x,y,z-1));

      res=(res+ans+ans1+ans2)%mod;

      return dp[x][y][z]=(ans+ans1+ans2)%mod;

 }

  

  int getSum(int X, int Y, int Z) {

        memset(dp,-1,sizeof(dp));

         fact[0]=1;

        for(int i=1;i<=182;i++) fact[i]=(fact[i-1]*i)%mod;

        res=0;

        fun(X,Y,Z);

        return res;

     
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        Solution ob;
        cout << ob.getSum(x, y, z) << "\n";
    }
    return 0;
}

// } Driver Code Ends