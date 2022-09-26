class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n=size(nums); 
        int  sum=0;
        for(auto i : nums)sum+=i;
        if (m==1)return sum;
        int low=0,high=sum;
        int  res=INT_MAX;
        
        while (low<=high){
            
           int mid=low+(high-low)/2;
            if (isValid(nums,n,m,mid)) 
            {
                res=min(res,mid);
                high=mid-1;
            }
            else 
                low=mid+1;
            
        }
        return res;
    }
    
    bool isValid(vector<int> nums,int n, int m, int mid){
        int assn=1;
        int sum=0;
        for(int i : nums){
            sum+=i;
            if (sum>mid){
                assn++;
                sum=i;
                if (sum>mid)
                    return false;
            }
            if (assn>m) 
                return false;
        }
        return true; 
    }
};