class Solution {
public:
    string largestMultipleOfThree(vector<int>& dgt) {
       
        vector<int>v[3];
        long long sum=0;
        for(int i=0;i<dgt.size();i++)
        {
            sum+=dgt[i];
            if(dgt[i]%3==0)v[0].push_back(dgt[i]);
            if(dgt[i]%3==1)v[1].push_back(dgt[i]);
            if(dgt[i]%3==2)v[2].push_back(dgt[i]);
        }
        sort(v[0].rbegin(),v[0].rend());
        sort(v[1].rbegin(),v[1].rend());
        sort(v[2].rbegin(),v[2].rend());
        if(sum%3==1)
        {
            if(v[1].size())
                v[1].pop_back();
            else if(v[2].size()>1)
            {
                v[2].pop_back();
                v[2].pop_back();
            }
            
            
        }
          if(sum%3==2)
        {
            if(v[2].size())
                v[2].pop_back();
            else if(v[1].size()>1)
            {
                v[1].pop_back();
                v[1].pop_back();
            }
            
        }
        
        vector<int>ans;
        
        for(int i=0;i<3;i++)
        {
            for(auto x:v[i])
                ans.push_back(x);
        }
        sort(ans.rbegin(),ans.rend());
        string res="";
        for(auto x:ans)
            res+=to_string(x);
        int i=0;
        while(res.length() and res[i+1]=='0'){res.pop_back();}
        return res;
        
        
        
    }
};