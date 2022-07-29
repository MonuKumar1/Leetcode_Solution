class Solution {
public:
    set<vector<int>>subsets; 
    void helper(int index,vector<int>&current, vector<int>&nums)
    {
        subsets.insert(current);
        for(int i=index;i<nums.size();i++)
        {
            current.push_back(nums[i]); 
            helper(i+1,current,nums); 
            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>current;
        helper(0,current,nums);
        vector<vector<int>>ans(subsets.begin(),subsets.end()); 
        return ans;
    }
};


// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> subs = {{}};
//          int start=0,end=0;
//         for(int i=0;i<nums.size();i++){
//             start=0;
//             if(i>0 and nums[i]==nums[i-1]) start=end+1;   
//           end=subs.size()-1;
//             int n=subs.size();
//             for(int j=start;j<n;j++)
//             {
//                 vector<int>temp=subs[j];
//                 temp.push_back(nums[i]);
//                 subs.push_back(temp);
//             }
//         }
        
//         return subs;
        
        
        
//     }
// };
//     class Solution {
// public:
//     vector<vector<int> > subsetsWithDup(vector<int> &S) {
//         vector<vector<int> > totalset = {{}};
//         sort(S.begin(),S.end());
//         for(int i=0; i<S.size();){
//             int count = 0; // num of elements are the same
//             while(count + i<S.size() && S[count+i]==S[i])  count++;
//             int previousN = totalset.size();
//             for(int k=0; k<previousN; k++){
//                 vector<int> instance = totalset[k];
//                 for(int j=0; j<count; j++){
//                     instance.push_back(S[i]);
//                     totalset.push_back(instance);
//                 }
//             }
//             i += count;
//         }
//         return totalset;
//         }
// };