class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if ((n == 0) || (k <= 0))return;
         
            deque<int>q;
            for(int i=0;i<n;i++)
            {
                q.push_back(nums[i]);
            }
             for(int i=0;i<k;i++)
             {
                 int temp=q.back();
                 q.pop_back();
                 q.push_front(temp);
             }
                 for(int i=0;i<n;i++)
                 {
                     nums[i]=q.front();
                     q.pop_front();
                     
                 }
          
    }
};