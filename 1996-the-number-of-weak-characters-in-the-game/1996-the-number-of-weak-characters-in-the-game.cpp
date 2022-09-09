class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        
        sort(prop.begin(),prop.end());
        int n=prop.size();
        int a=prop[n-1][0],b=prop[n-1][1];
        
        int maxi=prop[n-1][1];
        int ans=0;
        for(int i=n-2;i>=0;i--)
        {
             if(prop[i][0]<prop[i+1][0]) 
            {
                b=max(maxi,b);
               maxi=max(b,prop[i][1]); 
            }
            if(prop[i][0]<a && prop[i][1]<b)
              ans++;
        }
   
        return ans;
        
        
    }
};