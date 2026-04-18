class Solution {
    public int minimumSwap(String s1, String s2) {
        
        int cntx1 =0,cnty1=0,cntx2=0,cnty2=0;

        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)!=s2.charAt(i)){
                if(s1.charAt(i)=='x')cntx1++;
                else cnty1++;
                if(s2.charAt(i)=='x')cntx2++;
                else cnty2++;
            }
        }

        int tx = cntx1+ cntx2;
        int ty = cnty1+ cnty2;
        System.out.println(tx+" "+ty);
        if(tx%2!=0 || ty%2!=0)return -1;

        return cntx1 / 2 + cnty1 / 2 + (cntx1 % 2) * 2;

    }
}