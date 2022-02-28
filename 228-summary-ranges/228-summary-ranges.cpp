class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            string t="";
            int j=i;
            while(j+1<n and nums[j]+1==nums[j+1])
            {
                j++;
            }
            
            if(i!=j)
            {
                t=(to_string(nums[i]))+"->"+to_string(nums[j]);
            }
            else t=to_string(nums[i]);
            ans.push_back(t);
            i=j;
            
            
        }
        return ans;
        
        
        
    }
};