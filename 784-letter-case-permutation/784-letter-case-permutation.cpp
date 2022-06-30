class Solution {
public:
    vector<string>ans;
    // set<int>s;
    void solve(string str,int i)
    {
        if(i>=str.size())
        {
            ans.push_back(str);
            return;
        }
        
        if(str[i]>='a' and str[i]<='z')
        {
            int n='A'-'a';
            solve(str,i+1);
            str[i]+=n;
            solve(str,i+1);
        }
        if(str[i]>='A' and str[i]<='Z')
        {
            int n='A'-'a';
            solve(str,i+1);
            str[i]-=n;
            solve(str,i+1);
        }
        
         if((str[i]<'a' || str[i]>'z')and  (str[i]<'A' || str[i]>'Z') )
        // if(str)
        solve(str,i+1);
            
        
        
    }       
    
    vector<string> letterCasePermutation(string s) {
     
        solve(s,0);
        set<string>st;
        // st.insert(s);
        // cout<<
        for(auto x:ans)st.insert(x);
        
        ans.clear();
        
        for(auto x:st)ans.push_back(x);
        
        return ans;
        
        
    }
};