class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int>mp;
        
        int n= s.length();
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            
        if(mp.find(s[i])==mp.end()){
            mp[s[i]]++;
        }
        else {
           
            while(j<i and   mp[s[i]]!=0){
                mp.erase(s[j]);
                j++;
            }
            mp[s[i]]++;
        }
        
         int l=mp.size();
            
         ans=max(ans,l);
            
        }
        
        return ans;
        
        
    }
};