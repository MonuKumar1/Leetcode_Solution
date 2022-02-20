class Solution {
public:
    string repeatLimitedString(string s, int k) {
        
//          int n=s.size();
//         unordered_map<char,int>mp;
        
//         for(int i=0;i<n;i++)
//          mp[s[i]]++;   
        
//         priority_queue<pair<char,int>>pq;
        
//         for(auto &x:mp)
//             pq.push({x.first,x.second});
        
//         string ans="";
        
//         while(!pq.empty())
//         {
//             char c=pq.top().first;
//             int count=pq.top().second;
//             pq.pop();
            
//             int mini=min(count,k);
            
//             for(int i=0;i<mini;i++)
//             {
//                 ans+=c;
//             }
            
//              char c2;
//             int count2=0;
            
//             if(count-mini>0)
//             {
//                 if(!pq.empty())
//                 {
//                     c2=pq.top().first;
//                     count2=pq.top().second;
//                     pq.pop();
//                 }
//                 else return ans;
                
//                 ans+=c2;
//                 pq.push({c2,count-mini});
//                 if(count2-1>0)
//                     pq.push({c2,count2-1});
                
//             }          
            
            
            
            
//         }
        
        
        
//         return ans;
        int n = s.length();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        priority_queue<pair<char,int>> pq;
        for(auto i: m){
            pq.push({i.first,i.second}); // pushing the characters with their frequencies.
        }
        
        string ans = "";
        while(!pq.empty()){
            char c1 = pq.top().first;
            int n1 = pq.top().second;
            pq.pop();
                
            int len = min(k,n1); // Adding characters upto minimum of repeatLimit and present character count.
            for(int i=0;i<len;i++){ // adding the highest priority element to the ans.
                ans += c1;
            }
            
            char c2;
            int n2=0;
            if(n1-len>0){ // If the cnt of present character is more than the limit.
                if(!pq.empty()){ //Getting the next priority character.
                    c2 = pq.top().first;
                    n2 = pq.top().second;
                    pq.pop();
                }
                else{
                    return ans; // if there is no another letter to add, we just return ans.
                }
                ans += c2; // Adding next priority character to ans.
                
                // If the elements are left out, pushing them back into priority queue for next use.
                pq.push({c1,n1-len});
                if(n2-1>0){
                    pq.push({c2,n2-1});
                } 
            }
        }
        return ans;
    }
};