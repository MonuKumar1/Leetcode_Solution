class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
int count=1;
    if(nums.size()<=0)
        return 0;
    for(int i=0; i<nums.size()-1; )
    {
        if(nums[i+1]>nums[i]) //increasing
        {
            count++;
            while(i<nums.size()-1 && nums[i+1]>=nums[i])
                i++;
        }
        else if(nums[i+1]<nums[i]) //Decreasing
        {
            count++;
            while(i<nums.size()-1 && nums[i+1]<=nums[i]) 
                i++;
        }
        else
            i++;
    }
    return count;

        //         int n=nums.size();
//         count=0;
//         vector<int>v;
//         for(int i=1;i<n;i++)
//         { 
//             v.push_back(nums[i]-nums[i-1]);
            
//         }
//         int flag;
//         if(v[0]>0)flag=1;
//         else flag=0;
//         for(int i=0;i<n-1;i++)
//         {
           
//             while(i<n-1 and nums[i]>0)
//             {
//                 i++;
//             }
//         }
    }
};