class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
       int n=nums.size(); 
        // int vector<int>pr1,pr2;
         int rightOne=0,leftZero=0,maxScore=0;
        for(auto x:nums)rightOne+=x;
        
        vector<int>res;
        for(int i=0;i<=nums.size();i++){
            
            if(rightOne+leftZero > maxScore){
                maxScore=rightOne+leftZero;
                res.clear();
                res.push_back(i);
            }
            
            else if(rightOne+leftZero == maxScore) res.push_back(i);
            
            if(i!=nums.size()){
                if(nums[i]==0)leftZero++;
                if(nums[i]==1)rightOne--;
            }
        }
        return res;
        
    }
};