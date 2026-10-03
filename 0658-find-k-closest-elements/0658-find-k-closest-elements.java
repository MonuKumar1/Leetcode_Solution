class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {

        int  n= arr.length;
        int diff[] = new int[n];

        for(int i=0;i<n;i++){

             diff[i] = Math.abs(arr[i]-x);
        }

        int l =0,h=n-1;
        while(l<h){

            if(h-l<k)break;

            if(diff[l]<=diff[h])h--;
            else l++;
        }

        List<Integer>ans = new ArrayList<>();

        for(int i=l;i<=h;i++){
            ans.add(arr[i]);
        }
        return ans;



    }
}