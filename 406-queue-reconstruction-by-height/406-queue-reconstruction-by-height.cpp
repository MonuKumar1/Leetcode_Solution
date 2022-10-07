class Solution {
public:
 
    vector<vector<int>> reconstructQueue(vector<vector<int>>&v) {
     
        int n=v.size();
       vector<vector<int>> ans(n,vector<int>(2,-1));
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++){
           int cnt=0;
           for(int j=0;j<n;j++){
              
               if(ans[j][0]==-1 || ans[j][0]==v[i][0])cnt++;
                if(cnt==v[i][1]+1){
                   ans[j][0]=v[i][0];
                   ans[j][1]=v[i][1];
                   break;
               }
           }
       }
        return ans;
        
    }
};