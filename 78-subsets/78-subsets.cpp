class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        // vector<vector<int>> res;
        // // vector<int>curr={};
        // // helper(0,nums,curr,res);
        // return res;
        
     vector<vector<int>> subs = {{}};

        for(int i=0;i<nums.size();i++){
            
            int n=subs.size();
            
            for(int j=0;j<n;j++)
            {
                    vector<int>temp=subs[j];
                    temp.push_back(nums[i]);
                    subs.push_back(temp);
            }
        }
        return subs;
        
    }  
    
    
};
// void fff(vector<int>&v,vector<int>cur,vector<vector<int>>&ans,int i,int n)
// {
//     if(i>=n)
//     {
//         ans.push_back(cur);return;
//     }
//     cur.push_back(v[i]);
//     fff(v,cur,ans,i+1,n);
//     cur.pop_back();
//     fff(v,cur,ans,i+1,n);
// }

// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>&v) {
//         int i,j,k,l,m,n;
//         n=v.size();
//         vector<vector<int>>ans;
//         vector<int>cur;
//         fff(v,cur,ans,0,n);
//         return ans;
//     }
// };