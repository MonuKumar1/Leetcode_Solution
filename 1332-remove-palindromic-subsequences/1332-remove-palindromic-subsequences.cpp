class Solution {
public:
    int removePalindromeSub(string s) {
        
        int n=s.size();
        
        string temp=s;
        reverse(temp.begin(),temp.end());
        if(temp==s)return 1;
        return 2;
    }
};