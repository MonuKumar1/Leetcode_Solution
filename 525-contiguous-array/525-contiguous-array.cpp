class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        
        int n=arr.size();
        for(int i=0;i<n;i++)
            if(arr[i]==0)arr[i]=-1;
        
        unordered_map<int, int> presum;
 
    int sum = 0; 
    int max_len = 0; 
 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
 
        if (arr[i] == 0 && max_len == 0)
            max_len = 1;
        if (sum == 0)
            max_len = i + 1;
 
        if (presum.find(sum) != presum.end()) {
            max_len = max(max_len, i - presum[sum]);
        }
        else {
            presum[sum] = i;
        }
    }
 
    return max_len;
        // int maxi=0;
        // stack<int>s;
        // s.push(nums[0]);
        // for(int i=1;i<n;i++)
        // {
        //     if(s.empty() || s.top()==nums[i])
        //         s.push(nums[i]);
        //    if(s.top()!=nums[i])
        //    {
        //        s.pop();
        //    }
            // maxi=max(maxi,max(count1,count2));
            
            
        
 //           int j=i,count1=0,count2=0;
//             while(j<n and nums[j]==1 and nums[j-1]==0)
//             {
//                 count1++;
//                 j+=2;
//             }
//             j=i;
//             while(j<n and nums[j]==0 and nums[j-1]==1)
//             {
//                 count2++;
//                 j+=2;
//             }
            
            // maxi=max(maxi,max(count1,count2));
            
//         }
//         return n-s.size();
        
    }
};