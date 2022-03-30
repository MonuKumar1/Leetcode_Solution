class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& v, int n) {
        vector<long long>ans;

        int num = n%2==0 ? n/2 : n/2+1;
        
        long long d=pow(10,num-1);
        long long d_max=pow(10,num)-1;
        

        
        int diff = d_max-d;
        
        for(int i=0; i<v.size(); i++) {
            
            if (v[i] > diff+1){
                ans.push_back(-1);
                continue;
            } 

            
            long long half = d+(v[i]-1);
            
            string s = to_string(half);
            string s2 = s;
            reverse(s2.begin(), s2.end());
            
            string s4;
            if (n%2!=0) {
                s4 = s2.substr(1);
                s2 = s4;
            }
            
            string s3 = s+s2;
            
            ans.push_back(stol(s3));
                
        }
        
        return ans;
        
        
        
    }
};