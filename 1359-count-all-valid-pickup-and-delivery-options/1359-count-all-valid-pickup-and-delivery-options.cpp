class Solution {
public:
    const unsigned int M = 1000000007; 
   long long fact(long long n)
    { 
     long long ans=1;
        while(n>0)
        {
            ans=(ans*n);
            if (n%2==0) {
                ans = (ans/2);
            }
            ans = ans%M;
            n--;
        }
     return ans;
    }
    
    int countOrders(int n) {
        
        // long long b=pow(2,n);
        // cout<<b<<endl;
        long long fac=fact(2*n);
        // cout<<fac<<endl;
        return fac;
    }
};