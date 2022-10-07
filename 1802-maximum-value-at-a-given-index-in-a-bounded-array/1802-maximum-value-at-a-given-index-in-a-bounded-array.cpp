class Solution {
public:
    bool solve(   long long int x,   long long int n,int i,int maxsum){
        long long int left=i,right=n-i-1,a=1,b=0;
       long long int low=max(x-i,a),sum=0;
        
        sum+=(x*(x+1))/2-(low*(low-1))/2;  
        low=max(x-right,a);
        sum+=(x*(x-1))/2-(low*(low-1))/2;
        sum+=max(left-(x-1),b);
        sum+=max(right-(x-1),b);
        if(sum<=maxsum)return true;
        return false;
        
    }
    int maxValue(int n, int index, int maxSum) {
      long long   int low=1,high=maxSum,ans=0;
        while(low<=high){
              long long int mid=low+(high-low)/2;
            if(solve(mid,n,index,maxSum)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
    
};