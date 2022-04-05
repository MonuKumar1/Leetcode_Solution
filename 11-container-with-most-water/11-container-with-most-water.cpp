class Solution {
public:
    int maxArea(vector<int>& height) {
     
        int n=height.size();
        int l=0;
        int h=n-1;
        int ans=0;
        while(l<=h)
        {
           ans=max(ans,min(height[h],height[l])*(h-l));
            if(height[l]<height[h])
                l++;
            else
                h--;
        }
        return ans;
        
    }
};