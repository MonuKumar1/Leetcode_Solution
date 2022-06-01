class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> v;
        // bool flag=false;
        for(int i=0;i<nums.size();i++)
         {
            for(int j=0;j<nums.size();j++)
                if(i!=j&&nums[i]==target-nums[j]) 
                {
                    v.push_back(i);
                     v.push_back(j);return v;
                }
            
            
            
            
            
            
            // vector<int>:: iterator it,it2;
//             // vector<int> v;
           
//             it=find(nums.begin(),nums.end(),target-nums[i]);
//             if(it!=nums.end() && it>nums.begin()+i)
//             { v.push_back(i);
//                 v.push_back(it-nums.begin());
//                 // return v;
//                  break;
            }
                
             
        
        return v;
    }
};