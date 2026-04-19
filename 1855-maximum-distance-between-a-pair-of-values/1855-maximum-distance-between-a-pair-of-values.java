class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        
            int n1 = nums1.length;
            int n2 = nums2.length;
            int ans = Integer.MIN_VALUE;

            for(int i=0;i<n1;i++){

                int val = nums1[i];

                int l =i, h= n2;
                int res = Integer.MIN_VALUE;
                int m =h;
                while(m>=i && l<h){
                     m  = (l+h)/2;

                    if(nums2[m]>=val){
                        res = Math.max(res,m-i);
                        l = m+1;
                    }
                    else
                    h = m;

                }

                ans = Math.max(ans,res);

            }

            return ans!=Integer.MIN_VALUE?ans:0;
    }
}