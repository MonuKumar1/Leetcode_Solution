class Solution {
public:
    vector<string>ans;
    void solve(int ob,int cb,string str,int n){
        if(ob>n and cb>n)return;
        
       
       if(ob<n) {
           // str+="(";
           solve(ob+1,cb,str+"(",n);
       
       }
         
        if(ob>cb) {
           // str+=")";
            // cout<<ob<<" ";
           solve(ob,1+cb,str+")",n);
            
        }
       
        
      if(str.size()==2*n)
          ans.push_back(str);
        
    }
    
    
    vector<string> generateParenthesis(int n) {
        
       int ob=0,cb=0; 
        solve(0,0,"",n);
        
        return ans;
        
    }
};