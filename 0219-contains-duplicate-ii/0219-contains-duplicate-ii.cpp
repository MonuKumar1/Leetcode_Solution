class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
       //  set<int>s(nums.begin(),nums.begin()+k);
       //  int x=s.size();
       // if(k>x)return true;
       //  else
       //  {
       //      for(int i=k;k<nums.size();i++)
       //      {
       //          if(s.find(nums[i])!=s.end())return true;
       //          else
       //          {
       //              s.erase(nums[i-k-1]);
       //          }
       //          s.insert(nums[i]);
       //      }
       //  }
       //  return false;
              unordered_set<int> s;
        
       if (k <= 0) return false;
       if (k >= nums.size()) k = nums.size() - 1;
       
       for (int i = 0; i < nums.size(); i++)
       {
           if (i > k) s.erase(nums[i - k - 1]);
           if (s.find(nums[i]) != s.end()) return true;
           s.insert(nums[i]);
       }
       
       return false;
    }
};