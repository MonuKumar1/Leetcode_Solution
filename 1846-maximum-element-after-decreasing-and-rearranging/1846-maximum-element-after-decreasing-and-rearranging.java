class Solution {
    public int maximumElementAfterDecrementingAndRearranging(int[] arr) {
        
        Arrays.sort(arr);

        int n = arr.length;
        if(n==1)return 1;
        // 100,100,100
        // Set<Integer> st = new HashSet<>();
        // for(int x:arr)st.add(x);
        // if(st.size()==1)return arr[];


        int curr_max=arr[0];
        arr[0]=1;
        for(int i=0;i<n;i++){

            if(i>0 && arr[i]>arr[i-1] ){arr[i]= arr[i-1]+1;}
        }
        return arr[n-1];


    }
}