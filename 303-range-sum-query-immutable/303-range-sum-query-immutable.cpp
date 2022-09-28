class NumArray {
public:
    vector<int>v,pref;
    NumArray(vector<int>& nums) {
        v=nums;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
            pref.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)return pref[right];
        return pref[right]-pref[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */