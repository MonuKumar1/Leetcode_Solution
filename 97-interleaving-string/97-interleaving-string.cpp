class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size() != s3.size())return false;
        // int t[s1.size()+1][s2.size()+1];
        vector<vector<int>> t(s1.size()+1, vector<int>(s2.size()+1));
        t[0][0]=1;
        for(int i=1;i<=s1.size();i++){
            if(s1[i-1]==s3[i-1] && t[i-1][0]==1){
                t[i][0]=1;
            }
        }
        t[0][0]=1;
        for(int i=1;i<=s2.size();i++){
            if(s2[i-1]==s3[i-1] && t[0][i-1]==1){
                t[0][i]=1;
            }
        }
        
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(t[i-1][j]==1 && (s1[i-1]==s3[i+j-1]) ){
                    t[i][j]=1;
                }
                else if(t[i][j-1]==1 && (s2[j-1]==s3[i+j-1])){
                    t[i][j]=1;
                }
                
            }
        }
        
        return t[s1.size()][s2.size()];
    }
};