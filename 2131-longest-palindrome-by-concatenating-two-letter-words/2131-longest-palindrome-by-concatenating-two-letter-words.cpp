class Solution {
public:
    int longestPalindrome(vector<string>& w) {
        
        int n=w.size();
        
        unordered_map<string,int>mp;
        for(auto s:w)
            mp[s]++;
        
//         for(auto it:mp)
//         {           
//         }
        int maxi=0,d=0;
        int count=0,countd=0;
        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(int i=0;i<n;i++)
        {
            string rs=w[i];
            reverse(rs.begin(),rs.end());
            
            if(rs==w[i] and mp[rs]%2==1){
                // maxi=max(maxi,mp[rs]);
                countd+=(mp[rs]-1)*2;
                mp[rs]=0;
                d++;
            }
           else if(rs==w[i] and mp[rs]%2==0){
                // maxi=max(maxi,mp[rs]);
                countd+=(mp[rs])*2;
                mp[rs]=0;
           
            }
            else if(mp[rs]>=1)
            { 
                // cout<<"hh"<<endl;
                
                int mini=min(mp[w[i]],mp[rs]);
                mp[w[i]]=0;
                mp[rs]=0;
                count+=mini;
            }
        }
        int ans=count*4+countd;
        if(d>0)return ans+2;
        
        return ans;
        
    }
};


// ["lc","cl","gg"]
// ["ab","ty","yt","lc","cl","ab"]
// ["cc","ll","xx"]
// ["dd","aa","bb","dd","aa","dd","bb","dd","aa","cc","bb","cc","dd","cc"]
// ["em","pe","mp","ee","pp","me","ep","em","em","me"]
// ["ll","lb","bb","bx","xx","lx","xx","lx","ll","xb","bx","lb","bb","lb","bl","bb","bx","xl","lb","xx"]