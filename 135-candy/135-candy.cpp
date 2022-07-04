class Solution {
public:
    int candy(vector<int>& ratings) {
        
//         int n=vec.size();
//         vector<int>v(n,1);
//         int ans=0;
        
//         for(int i=1;i<n;i++)
//         {
//             if(vec[i]<vec[i-1])
//             {
//                 v[i-1]+=1;
                
//             }
//             else if(vec[i]>vec[i-1])
//                 v[i]+=1;
//         }
        
//         for(int i=n-1;i>0;i--)
//         {
//             if(vec[i]<vec[i-1] and v[i]>v[i-1])
//             {
//                 v[i-1]+=1;
                
//             }
//            else if(vec[i]>vec[i-1] and v[i]<=v[i-1] )
//                 v[i]+=1;
//         }
        
//         for(auto x:v){
//             // cout<<x<<" ";
//             ans+=x;
//         }
//         return ans;
            int n = ratings.size();
        if(n == 1)return 1;
        vector<int>l(n, 1), r(n, 1);
        for(int i = 0; i < n-1; i++)
            if(ratings[i] < ratings[i+1])l[i+1] = l[i] + 1;
        
        for(int i = n-1; i >= 1; i--)
            if(ratings[i-1] > ratings[i])r[i-1] = r[i] + 1;
        
        long long int ans = 0;
        for(int i = 0; i < n; i++)
            ans += max(l[i], r[i]);
        
        return ans;
        
        
    }
};