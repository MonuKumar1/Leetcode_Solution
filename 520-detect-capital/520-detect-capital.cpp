class Solution {
public:
    bool detectCapitalUse(string word) {
        string s1=word,s2=word;
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        transform(s2.begin(),s2.end(),s2.begin(),::toupper);
        string s3=s1;
        s3[0]-=('a'-'A');
        
        if(s1==word || s2==word || s3==word)return true;
        return false;
        
    }
};