class Solution {
public:
    string reverseWords(string s) {
        vector<string>str;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            string t="";
            while(i<n and s[i]!=' ')
            {
                t+=s[i];i++;
            }
            if(t.size()>0)str.push_back(t);
        }
        // cout<<str[0]<<" "<<str[1];
        reverse(str.begin(),str.end());
        string x="";
        for(int j=0;j<str.size();j++)
        {
            x.append(str[j]);
            if(j!=str.size()-1)x+=" ";
        }
    
        return x;
    }
};