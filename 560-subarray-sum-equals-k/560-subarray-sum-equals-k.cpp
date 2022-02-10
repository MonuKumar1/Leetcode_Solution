class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         int s= nums.size();
//         int count=0,sum=0;
//         if(s==1 and k==0)
//             return 0;
        
//         if(k==0)
//         {   
            
//             for(int i=1;i<s;i++)
//             { 
//                 int sum2=0;
//                 for(int j=0;j<i;j++)
//                 {
//                     sum2+=nums[j];
//                     if(sum2==0){
//                         count++;                        
//                     }
                    
//                 }
//                 // sum=0;
                
                
//             }
//             return count;
//         }
        
//         for(int i=0;i<s;i++)
//         { 
//             if(sum<k)
//                 sum+=nums[i];
//             if(sum==k)
//                 count++;
//           if(sum>k and k!=0)
//               sum=0;
            
//         }
//         return count;
        unordered_map<int, int> seen = {{0, 1}};
        int count = 0, sum = 0;
        for (auto n: nums) {
            sum += n;
            count += seen[sum - k];
            seen[sum]++;
        }
        return count;
    }
};