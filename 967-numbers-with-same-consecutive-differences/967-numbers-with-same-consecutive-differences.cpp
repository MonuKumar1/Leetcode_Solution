class Solution {
public:
    void dfs(int num,int cnt,int k,vector<int>&v)
    {
        if(cnt==0){
            v.push_back(num);
            return;
        }
        int lst_d=num%10;
        if(lst_d>=k)
            dfs(num*10+lst_d-k,cnt-1,k,v);
        if(k>0 and lst_d+k<10)
            dfs(num*10+lst_d+k,cnt-1,k,v);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int>v;
        // if(k==0)
        if(n==1)v.push_back(0);
        
        for(int i=1;i<=9;i++)
        {
            dfs(i,n-1,k,v);
        }
        return v;
        
    }
};
