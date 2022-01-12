class Solution {
public:
    int wordCount(vector<string>& sw, vector<string>& tw) {
      
        
        int n=sw.size();
        int m=tw.size();
      
        for(auto &x:sw)sort(x.begin(),x.end());
        for(auto &x:tw)sort(x.begin(),x.end());
        // for(auto x:sw)cout<<x<<" ";
        sort(sw.begin(),sw.end());
        
        int ans=0;
        
        for(int i=0;i<m;i++)
        {
            int len=tw[i].size();
            
            for(int j=0;j<len;j++){
                string temp=tw[i].substr(0,j)+tw[i].substr(j+1,len-1-j);
                // cout<<temp<<endl;
                if(binary_search(sw.begin(),sw.end(),temp))
                {
                    ans++;break;
                }
                
             }
            
        }
        return ans;
        
    }      
        
//         int mini=29,maxi=0;
//         for(auto x:tw)
//         {
//             // mini=min(x.length(),mini);
//             // cout<<x<<" "<<x.length()<<endl;
//             int temp=x.length();
//             mini=min(temp,mini);
//             maxi=max(temp,maxi);
            
//         }
        
     
//         vector<string> swn;
//         for(auto x:sw)
//         {
//             if(x.size()<mini-1 || x.size()>=maxi) continue;
//             else swn.push_back(x);
                
//         }
        
//         // for(auto x:swn)
//         //     cout<<x<<" ";
//         n=swn.size();
//         int ans=0;
//         for(int i=0;i<m;i++)
//         {
//             string word=tw[i];
//             int size=word.length();
//             for(int j=0;j<n;j++)
//             {
//                 string word2=swn[j];
//                 int size2=word2.length();
//                 if(size-size2!=1)continue;
//                 int countd=0;
//                 for(int i=0;i<size2;i++)
//                 {
                    
//                 }
                
//             }
            
//         }
        
        
        
//         return 0;
            
        
    // }
};