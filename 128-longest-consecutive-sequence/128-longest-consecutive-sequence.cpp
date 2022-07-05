class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
int n=nums.size();
        int len=0,currlen=0,x=0;
    set<int> s(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                currlen=1;
                x=nums[i];
                while(s.find(x+1)!=s.end())
                {
                    currlen++;
                    x++;
                }
                len=max(len,currlen);
            }
        }
        return len;
        
    }
};