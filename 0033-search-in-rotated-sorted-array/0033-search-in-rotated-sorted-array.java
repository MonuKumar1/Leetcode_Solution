class Solution {
    public int search(int[] nums, int t) {
        
         int h = nums.length-1,l=0;

        while(l<=h){
            int m = (h+l)/2;

            if(t == nums[m])return m;

            if(nums[m]<nums[h]){
                if(t>=nums[m] && t<=nums[h]){
                    l = m+1;
                }
                else h =m-1;
            } else{
                if(t>=nums[l] && t<nums[m]){
                    h = m-1;
                }
                else l = m+1;
            }
        }
        return -1;



    }
}