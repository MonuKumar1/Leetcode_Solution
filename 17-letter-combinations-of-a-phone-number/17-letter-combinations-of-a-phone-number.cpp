class Solution {
public:
    
    vector<string>ans;
    
    void solve(string digits,int ind,string curr)
    {
        vector<string>v= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(ind==digits.length())
        {
            ans.push_back(curr);
            curr="";
            return;
        }
        
        string s=v[digits[ind]-'0'];
        
        for(int i=0;i<s.length();i++)
        {
            solve(digits,ind+1,curr+s[i]);
        }
        
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        solve(digits,0,"");
        return ans;
        
    }
};