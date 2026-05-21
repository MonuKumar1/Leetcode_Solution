class Solution {
    public int longestCommonPrefix(int[] arr1, int[] arr2) {
        
            Set<String> st = new HashSet<>();
            int n = arr1.length;
            int m  = arr2.length;

            for(int i=0;i<n;i++){
                String str = String.valueOf(arr1[i]);
                int x = str.length();
                int p=1;
                while(p<=x){
                    st.add(str.substring(0,p));p++;
                }
            }
            int ans =0;
            for(int i =0;i<m;i++){
                 String str = String.valueOf(arr2[i]);
                int x = str.length();
                int p=1;
                while(p<=x){
                   if(st.contains(str.substring(0,p))) ans = Math.max(ans,p);
                   p++;
                }
            }
            return ans;
    }
}