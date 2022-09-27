class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        
        set<int>ans;
        set<int> prev;
        for (int x: arr) {
            set<int> cur;
            
            cur.insert(x);
            ans.insert(x);
            
            for (int y: prev){ 
                cur.insert(x | y);
                ans.insert(x|y);
           }
            
            prev = cur;
        }

        return ans.size();
        
        
    }
};