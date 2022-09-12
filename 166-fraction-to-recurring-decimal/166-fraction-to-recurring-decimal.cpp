class Solution {
public:
   pair<int, string> divide(long long int n,long long d){
       string ans;int i=0;
        map<int,int> mp;
       while(n!=0){
           if(mp[n]>0)return {mp[n],ans};
           mp[n]=i+1;
           n*=10;
           ans+=to_string(n/d);
           n%=d;
           i++;
       }
       return {-1,ans};
    }
    string fractionToDecimal(long long n, long long d) {
        string ans="";
        if(n*d<0)ans+="-";
        n=abs(n);d=abs(d);
        ans+=to_string(n/d);
       
        if(n%d){
            ans+='.';
            pair<int,string> p=divide(n%d,d);
            if(p.first!=-1){
                string s=p.second;
                for(int i=0;i<s.size();i++){
                    if(i==p.first-1)ans+='(';
                    ans+=s[i];
                }
               ans+=')';}
            else ans+=p.second;
        }
        return ans;
        
    }
};