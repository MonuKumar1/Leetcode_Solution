class Solution {
public:
    string reverseWords(string s) {
        
        string word="";
        string fin="";
        
        for(auto x:s)
        {
            if(x!=' ')
            {  word+=x; 
            }
            else 
            { reverse(word.begin(),word.end());
                 fin+=word;
                fin+=" ";
                word="";}
                
        }
        reverse(word.begin(),word.end());fin+=word;
        // fin.pop_back();
        return fin;
    }
};