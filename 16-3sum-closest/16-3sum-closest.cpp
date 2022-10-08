class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int ans;
        for(int i=0;i<n-2;i++)
        {
                int j=i+1,k=n-1;
                while(j<k){
                    int sum=nums[i]+nums[j]+nums[k];
                    
                    if(abs(sum-target)<mini)
                    {   
                        mini =abs(sum-target);
                        ans=sum;
                    }
                    if(sum<target)j++;
                    else if(sum>target)k--;
                    else 
                    {
                        ans=sum;
                        i=n-2;
                        break;
                    }
                    
                }
        } 
        return ans;
        
    }
};