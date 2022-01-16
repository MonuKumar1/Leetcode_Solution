class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        int maxi=0;
        int start=0,ans=0,flag1=0,flag2=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==1)
            {
                start=i;
                flag1=1;
                break;
                
            }
        }
        int ms=start;
        
        for(int i=start+1;i<n;i++)
        {
            if(s[i]==1)
            {
                flag2=1;
                maxi=max(maxi,i-start);
                start=i;
            }
        }
        if(flag1 and flag2)
         ans=max(ms,max(maxi/2,n-start-1));
        if(flag1 and !flag2)
            ans=max(n-start-1,start);
        
        
        return ans;
    }
};