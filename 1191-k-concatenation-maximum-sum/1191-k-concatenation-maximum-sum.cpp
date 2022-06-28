class Solution {
public:
    
    
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
      long long total=0;
        int mod=1e9+7;
        for(auto x:arr){total=(total+x)%mod;}
        
        
        long long maxi=INT_MIN,sum=0;
        
       long long n=arr.size();
        
        for(int i=0;i<n;i++)
        {sum=(sum+arr[i])%mod;
            maxi=max(maxi,sum);
            if(sum<0)sum=0;
        }
        
        
        
       long long a_max=INT_MIN,b_max=INT_MIN;
        long long temp=0;
        for(int i=n-1;i>=0;i--)
        {
            temp=(temp+arr[i])%mod;
            a_max=max(temp,a_max);
        }
        
       temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=arr[i];
            b_max=max(temp,b_max);
        }
        if(k<2)return maxi;
        // if(k==2)
        if(maxi<=0)return 0;
        
        return max(max((a_max+b_max),maxi),(a_max+b_max)+((k-2))*(total))%mod;
        
        
        
        
        
    }
};