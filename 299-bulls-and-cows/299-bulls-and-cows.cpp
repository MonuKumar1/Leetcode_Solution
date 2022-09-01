class Solution {
public:
    string getHint(string s, string g) {
        
        int bulls=0;
        map<char,int>mp1,mp2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==g[i])bulls++;
            else {mp1[s[i]]++;mp2[g[i]]++;}
        }
        
        int cows=0;
        
         for(auto x: mp1)
        {
            if (mp2.find(x.first) != mp2.end())     
            {
                cows += min(x.second, mp2[x.first]);
            }
        }
        
        string ans=to_string(bulls)+"A"+to_string(cows)+"B";
        
        return ans;
        
        
    }
};