class Solution {
public:
    long long maximumSubsequenceCount(string s, string p) {
          long long int i,j,k,l,m,n;
           j=0;k=0;n=s.length();
        for(i=0;i<n;i++)if(s[i]==p[0])j++;
        for(i=0;i<n;i++)if(s[i]==p[1])k++;
        m=0;
        l=0;
        for(i=0;i<n;i++)
        {
            if(s[i]==p[1])m=m+(l);
            if(s[i]==p[0])l++;
        }
          return max(k+m,j+m);
    }
};