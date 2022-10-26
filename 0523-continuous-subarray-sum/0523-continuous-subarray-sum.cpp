class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        vector<int>pref;
        int sum=0;
        for(auto x:nums){
            sum+=x;
            pref.push_back(sum%k);
        }
        // for(auto x:pref)cout<<x<<" ";
        
        
        map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            
            if(mp.find(pref[i])==mp.end())
                mp[pref[i]]=i;
            else{
                // cout<<pref[i]<<"  "<<mp[pref[i]]<<endl;
                if(i-mp[pref[i]]>1)return true;
                
            }
            
        }
        return false;
        
    }
};