class Solution {
public:
    
    bool solve(vector<int>& arr,int ind,vector<int>&vis){
        if(ind<0 || ind>=arr.size()|| vis[ind])
            return false;
        if(arr[ind]==0)return true;
        vis[ind]=1;
        
        return solve(arr,ind+arr[ind],vis)||solve(arr,ind-arr[ind],vis);
        
    }
    bool canReach(vector<int>& arr, int s) {
        vector<int>vis(arr.size(),0);
        return solve(arr,s,vis);
        
    }
};