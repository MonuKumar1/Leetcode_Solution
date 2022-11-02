class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        
        unordered_set<string> st(bank.begin(),bank.end());
        
        if(st.find(end)==st.end())return -1;
        
        vector<char>mut={'A','C','G','T'};
        
        int ans=0;
        
        queue<string>q;
        q.push(start);
        
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                string curr=q.front();
                q.pop();
                if(curr==end) return ans;
                
                st.erase(curr);
                    
                for(int j=0;j<8;j++)
                {
                    char c= curr[j];
                    
                    for(int k=0;k<4;k++)
                    {
                        curr[j]=mut[k];
                        
                        if(st.find(curr)!=st.end())q.push(curr);
                        
                    }
                    
                    curr[j]=c;
                }
            }
               ans++;

        }
        return -1;
        
        
        
        
    }
};