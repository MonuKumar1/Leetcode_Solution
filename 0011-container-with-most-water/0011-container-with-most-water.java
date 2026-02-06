class Solution {
    public int maxArea(int[] h) {
        
            int n = h.length-1;

            int l=0;
            int ans = -1000000;
            while(l<n){
                ans = Math.max(Math.min(h[l],h[n])*(n-l),ans);
                if(h[l]<h[n]){
                    l++;
                }else n--;
            }
            return ans;

    }
}