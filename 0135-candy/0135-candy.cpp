class Solution {
public:
    int candy(vector<int>& vec) {

        int n = vec.size();
        vector<int> v(n, 1),v1(n,1);
        vector<int> cand(n, 1);

        int ans = 0;

        for (int i = 1; i < n; i++) {
           
            if (v[i - 1] <= v[i] && vec[i] < vec[i - 1]) {
                v[i - 1] = v[i]+1;
                

            } else if (v[i] <= v[i - 1] && vec[i] > vec[i - 1]) {
                v[i] =v[i-1]+1;
                
            } 
        }

         for (int i = n-1; i >0; i--) {
           
            if (v[i - 1] <= v[i] && vec[i] < vec[i - 1]) {
                v[i - 1] = v[i]+1;
                

            } else if (v[i] <= v[i - 1] && vec[i] > vec[i - 1]) {
                v[i] =v[i-1]+1;
                
            } 
        }

        for(int i=0;i<n;i++){
            ans += max(v[i],v1[i]);
        }

        return ans;
    }
};