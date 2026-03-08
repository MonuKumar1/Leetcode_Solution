class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        
            Arrays.sort(arr);
            int diff = Integer.MAX_VALUE;

            for(int i =1;i<arr.length;i++){
                    diff = Math.min(diff,arr[i]-arr[i-1]);
            }

            List<List<Integer>> ans = new ArrayList<>();

           for(int i =1;i<arr.length;i++){
                   int diffcheck = arr[i]-arr[i-1];

                    if(diffcheck == diff){
                        ans.add(List.of(arr[i-1],arr[i]));
                    }
            }
        return ans;

    }
}