class Solution {
public:

    // To check for vowel
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
        else return false;
    }

    string reverseVowels(string s) {
        int l=0,h=s.size()-1;
        while(l<h){
            // when both are vowels - just swap
            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l],s[h]);
            }
            // If left is vowel
            // Find the right vowel
            else if(isVowel(s[l])){
                h--;
                while(l<h){
                    if(isVowel(s[h])){
                        swap(s[l],s[h]);
                        break;
                    }
                    else h--;
                }
            }
            // If right is vowel
            // Find the left vowel
            else if(isVowel(s[h])){
                l++;
                while(l<h){
                    if(isVowel(s[l])){
                        swap(s[l],s[h]);
                        break;
                    }
                    else l++;
                }
            }
            // Move both the pointers
            l++;
            h--;

        }
        return s;
    }
};