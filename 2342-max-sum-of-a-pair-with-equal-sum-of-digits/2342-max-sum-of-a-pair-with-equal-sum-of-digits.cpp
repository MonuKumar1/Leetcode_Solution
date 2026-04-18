class Solution {
public:
    int maximumSum(vector<int>& nums) {
          
        map<int,vector<int>>mp;

        // for(aut)
        for(int x:nums){

            int digitSum = solve(x);
            mp[digitSum].push_back(x);
     
        }
        int ans = -1;
        for(auto x:mp){
            
            vector<int> vec = x.second;
            sort(vec.begin(),vec.end());
            if(vec.size()==1)continue;
            ans = max(ans, vec[vec.size()-2]+vec[vec.size()-1]);
        }
        return ans;
    }

     int solve(int x){

        int res=0;
        while(x>0){
            res += x%10;
            x/=10;
        }
        return res;


    }
};