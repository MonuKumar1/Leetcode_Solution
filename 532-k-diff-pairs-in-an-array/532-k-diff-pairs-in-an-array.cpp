class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
//         // reverse(nums.begin(),nums.end());
        
//         // if(k==1)return nums.size()-1;
//         unordered_map<int,int>mp;
//         int cnt=0;
//         for(auto x:nums)mp[x]++;
//         for(int i=0;i<nums.size();i++)
//         {    
//             // mp[nums[i]]++;
//             if(mp.find(abs(k-nums[i]))!=mp.end())
//             {
//                 // cnt++;
//                 if(k-nums[i]>0)
//                 {cnt++;mp[k-nums[i]]--;
//                  mp[nums[i]]--;
//                 // cout<<i
//                 }
//                 else if(k-nums[i]<0) 
//                 {cnt++;mp[nums[i]-k]--;
//                 mp[nums[i]]--;}
                
                    
//                 // mp[abs(k-nums[i])]--;
//             }
           
//         }
//         return cnt;
    unordered_map<int, int> map;
        for(auto num:nums)
            map[num]++;
        
        int res = 0;
        if (k > 0) {
            for(auto a:map)
                if (map.find(a.first+k) != map.end()) 
                    res++;
        }
        
        else {
            for(auto a:map)
                if (a.second > 1)
                    res++;
        }
        
        return res;
    }
};