//copied but hojayega
class Solution {
public:
  string toPattern(string word) {
    map<char, char> M;
    int curr = 97;
    for(char& c: word) if(M.count(c) == 0) M[c] = (char) curr++;
    for(int i = 0; i < word.length(); i++) word[i] = M[word[i]];
    return word;
  }
  
  vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    string p = toPattern(pattern);
    vector<string> res;
    for(string& w: words) if(toPattern(w).compare(p) == 0) res.push_back(w);
    return res;
  }
};