class Solution {
public:
    string largestPalindromic(string num) {
        
        int n=num.size();
        map<char,int>mp;
        for(int i=0;i<num.size();i++)
        {
            mp[num[i]]++;
        }

        
        int mid=-1;
        string ans="";
        for(auto &x:mp)
        {
            if(x.second%2)
            {
                int var=x.first-'0';
                // cout<<"mid calculation"<<endl;
                    mid=max(mid,var);
                 // cout<<x.first<<"  mid calculation  "<<mid<<endl;
            }
            int cnt=x.second;
            
            string s(cnt/2,(x.first));
            ans+=(s);
        }
        
        
        
       int i=0;
        int f2=0;
       
        while(i<ans.size())
        {
            if(ans[i]!='0'){
                f2=1;
            }
            i++;
        }
        i=0;
        while(f2==0 and ans[i]=='0' and i<ans.size())
        {
            i++;
        }
     string anss=ans.substr(i);
        
        string ans2=anss;
        
        reverse(anss.begin(),anss.end());
        string res="";
        if(mid!=-1)
            
        { res=anss+to_string(mid)+ans2;}
        else
            res= anss+ans2;
        if(res.size())
        return res;
        return "0";
        
        
        
    }
};