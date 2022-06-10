class Solution {
public:
    int lengthOfLongestSubstring(string str) {
     
        
        unordered_map<char,int>mp;
        
        int s=0,maxi=0;
        
        for(int i=0;i<str.size();i++)
        {
            if(mp.find(str[i])!=mp.end() and mp[str[i]]>=s)
            {
                // mp[str[i]]=i;
                s=mp[str[i]]+1;
            }
            mp[str[i]]=i;
        maxi=max(maxi,i-s+1);
        }
        return maxi;
        
        
        
        
//         int maxi=0;
//         set<char> st;
//         int count=0,i=0;
//        while(i<str.size()){
           
//             if(st.find(str[i])==st.end())
//             {st.insert(str[i]);
//                maxi=max(maxi,i-count+1) ;
//              i++;
//             }
//              else
//             {
//                 st.erase(str[count]);
//                  count++;
                
//             }
        
//         }
//         return maxi;
        
        
    }
};