class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
          unordered_map<int, int> count;
        
        for(int n: arr) {
            int mod=n%k;
            if(mod<0) { 
                mod+=k; 
            }
            count[mod]++; 
        }
        
         if(count[0]%2!=0) {
             return false;
         }
        
        
        for(int i=1; i<=k/2; i++) {
            if(count[i]!=count[k-i]) {
                return false;
            }
        }
        return true;
    }
};