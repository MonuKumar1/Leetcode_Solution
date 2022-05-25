class Solution {
public:
    string s1;
vector<string> wordDict;   
    vector<string> ANS;
    vector<int>v;
    

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        this->s1 = s;
        this->wordDict = wordDict;
        vector<string> temp;
        space(s,0,temp);
        return this->ANS;
        
    }
    
    
    void space(string s, int i,vector<string> temp){
        vector<string> use1;
        for(auto str : wordDict){
            int l = str.length();
            if(s.substr(0, l) == str){
                 use1=temp;
                use1.push_back(str);
                if(l==s.size()){
                    string cur="";
                    for(int i=0;i<use1.size();i++){
                        cur+=use1[i];
                        if(i!=use1.size()-1)cur+=" ";
                    }
                    this->ANS.push_back(cur);}
                space(s.substr(l), l,use1);
                
            }
            
            
        }
        
    }
};