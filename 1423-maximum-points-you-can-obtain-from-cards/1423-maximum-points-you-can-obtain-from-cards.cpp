class Solution {
public:
//     int ans;
//     void dfs(vector<int>& v,int k,int i,int j)
//     {
//         if(k<=0)return ;
//         int val1=v[i+1];
//         int val2=v[j-1];
//         k--;
//         if(val1>val2)
//         {
//             ans+=v[i+1];
//             dfs(v,k,i+1,j);            
//         }
//         else {
//             ans+=v[j-1];
//             dfs(v,k,i,j-1);
//         }
        
//     }
        
    int maxScore(vector<int>& v, int k) {
        
        int n=v.size();
        
        // int i=0,j=n-1;
        int sum=0;
        
        for(auto x:v)sum+=x;
        
        int x=n-k;
        int temp=0;
        for(int i=0;i<x;i++)
            temp+=v[i];
        // cout<<temp<<endl;
        
        int mini=temp;
        
        for(int i=x;i<n;i++)
        {

            temp-=v[i-x];
            // cout<<temp<<endl;
            temp+=v[i];
                       mini=min(temp,mini);

        }
        return sum-mini;
        
        
        
        
    }
};