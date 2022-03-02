class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int m=s.size();
        int n=t.size();
        
        if(m==0)
            return 1;
        int j=0;
        
        for(int i=0;i<n;i++)
            if(t[i]==s[j])
                j++;
        if(j==m)
            return 1;
        else
            return 0;
        
    }
};