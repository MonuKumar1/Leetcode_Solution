class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=haystack.size(),m=needle.size();
        
        if(n==m and haystack!=needle){
           return -1;
        }
        
        if(haystack==needle)return 0;
        if(needle.size()==0)return 0;
        if(haystack.size()<needle.size())return -1;
        
        for(int i=0;i<haystack.size();i++)
        {
            string str="";
            int j=i,k=0;
            while(haystack[j]==needle[k] and j<haystack.size() and k<needle.size())
            {
                str+=haystack[j];
                if(str==needle)
                    return i;
                j++;k++;
            }
            // i=j-1;
            
        }
        return -1;
    }
};