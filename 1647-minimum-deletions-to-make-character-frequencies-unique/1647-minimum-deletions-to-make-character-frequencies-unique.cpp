class Solution {
public:
    int minDeletions(string s) {
        
           int n=s.size();
        vector<int>cnt(26,0);      
        for(auto p:s)cnt[p-'a']++;  
        vector<int>v; 
        for(int i=0;i<26;i++){
            if(cnt[i])v.push_back(cnt[i]); 
        }
        sort(v.rbegin(),v.rend());
        int c=0;     
        for(int i=1;i<v.size();i++){
            if(v[i]>=v[i-1]){
                if(v[i-1]==0){       
				  c+=v[i];
                  v[i]=0;
                  continue;
                }
                c+=(v[i]-v[i-1]+1);   
                v[i]=v[i-1]-1;          
            }
        }
        return c;
    }
};