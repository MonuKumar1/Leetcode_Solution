class Solution {
public:
     vector<vector<int>>ans;
    void solve(vector<int>a,int t,vector<int>v,int curr,int ind)
    {
        if(curr==t){
            ans.push_back(v);return;}
            if(curr>t || ind>a.size()-1)return;
         
        v.push_back(a[ind]);
        solve(a,t,v,curr+a[ind],ind);
        v.pop_back();
       solve(a,t,v,curr,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     
        vector<int>v;
        
        solve(candidates,target,v,0,0);       
        
        return ans;
    }
};