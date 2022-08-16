class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        vector<int> v(256,0);
        for(int i=0;i<n;i++)
        {
            v[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(v[s[i]]==1)
                return i;
        }
        return -1;
        // map<char,int>mp;
        // int n=s.size();
        // for(int i=0;i<n;i++)
        // mp[s[i]]++;
        // char crc;
        // for(auto it=mp.begin();it!=mp.end();it++)
        // { 
        //     if(it->second==1)
        //     {crc=it->first; break;}
        //  }   
        // for(int i=0;i<n;i++)
        // {
        //     if(s[i]==crc)
        //         return i;
        // }
        // return -1;
        }
};