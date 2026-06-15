class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        vector<pair<int,int>>pr;

        for(auto x:trips){
            pr.push_back({x[1],x[0]});
            pr.push_back({x[2],-1*x[0]});
        }
        sort(pr.begin(),pr.end());
        int cur=0;
        for(int i =0;i<pr.size();i++){
            cur+=pr[i].second;
            if(cur>capacity)return false;
        }
        return true;

    }
};