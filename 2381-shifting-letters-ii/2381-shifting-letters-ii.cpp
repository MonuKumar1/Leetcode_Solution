class Solution {
public:
    // scanline algorithm
    // https://www.youtube.com/watch?v=lFBpH_Mt_LI
    
    string shiftingLetters(string s, vector<vector<int>>& sh) {
        
        int sz=s.size();
        vector<int>line(sz+1,0);
        
        for(auto & i:sh){
            if(i[2]==1){
                line[i[0]]++;
                line[i[1]+1]--;
            }
            else{
                line[i[0]]--;
                line[i[1]+1]++;                
            }
        }
        //prefix sum;
        for(int i=1;i<=sz;i++)
            line[i]+=line[i-1];
        
        for(int i=0;i<sz;i++){
            
			int increaseBy=(s[i]-'a'+line[i])%26;
            
		// this is to make -ve module +ve. 
			increaseBy=(increaseBy+26)%26;
			s[i]='a'+increaseBy;
        }
        return s;      
    }
};