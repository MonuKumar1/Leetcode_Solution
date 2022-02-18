class Solution {
public:
    string removeKdigits(string num, int k) {
//         string s1=num;
//                 int n=num.length();
//         if(n==k)return "0";

//         if(num[1]=='0')
//         { 
//          string temp=num.substr(1,n-1);
//             num=temp;
            
//             k-=1;
//         }
        
//         // if(k==0)return num;
        
        
//         string s2="",s3="";
//         for(int i=n-k;i<n;i++)
//             s2+=num[i];
//         for(int i=0;i<n-k;i++)
//             s3+=num[i];
//         string s4=s3;
//         sort(s4.begin(),s4.end());
//         int n2=s4.size();
//         // char ch=s4[n2-1];
//                 string ans="";

//         ans+=s4.substr(0,n2-k);
        
//         int flag=0;
       
//         ans+=s2;
        
//         int i=0;
//         while(ans[i]=='0')i++;
//         int len=ans.size();
//         string ans2=ans.substr(i,len-i);
//         cout<<i<<endl;
//         return ans2;
        string ans = "";                                      
       
       for (char c : num) {
           while (ans.length() && ans.back() > c && k) {
               ans.pop_back();                                  
               k--;                                                       }
           
           if (ans.length() || c != '0') { ans.push_back(c); }  
       }
       
       while (ans.length() && k--) { ans.pop_back(); }         
       
       return ans.empty() ? "0" : ans;
        
        
    }
};