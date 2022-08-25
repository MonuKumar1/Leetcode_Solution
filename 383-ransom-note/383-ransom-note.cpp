class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m =magazine.size();
        if(n>m)return false;
         vector<int> v1(256,0),v2(256,0);
        for(int i=0;i<n;i++)
        {
            v1[ransomNote[i]]++;
        }
         for(int i=0;i<m;i++)
        {
            v2[magazine[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(v1[ransomNote[i]]>v2[ransomNote[i]])return false;
        }
       return true; 
    }
};