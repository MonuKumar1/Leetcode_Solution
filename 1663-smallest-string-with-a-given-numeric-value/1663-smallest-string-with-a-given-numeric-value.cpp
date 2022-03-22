class Solution {
public:
    string getSmallestString(int n, int k) {
        
        vector<int>v(n,1);
        
        int sum=n;
       
            
        
        for(int i=n-1;i>=0;i--)
        {
             
                 int t=k-sum+n-i;
                 
                 if(t>25)
                    { 
                     v[i]=26;
                     k-=26;
                    }
            
                 else
                     {
                         v[i]=t;k-=(t-1);
                     break;
                     }
                 // if(k<26)
           
            // cout<<endl;
            
            
        }
        // for(auto x:v)cout<<x<<" ";
        string ans="";
        for(auto x:v)
            ans+=('a'+x-1);
        return ans;
        
        
        
    }
};