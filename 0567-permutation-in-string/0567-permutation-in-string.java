class Solution {
    public boolean checkInclusion(String s1, String s2) {

            int [] freq = new int[26];

            for(int i=0;i<s1.length();i++){
                freq[s1.charAt(i)-'a'] ++;
            }

        //     for(int i :freq){
        //         System.out.print(i);
        //     }
        //   System.out.println();

            for(int i=0;i<s2.length();i++){
                    int cnt =0;
                    int j=i;
                   int [] freq2 = Arrays.copyOf(freq,26);
                    while(j<s2.length() && freq2[s2.charAt(j)-'a']!=0){
                        cnt++;
                        freq2[s2.charAt(j)-'a']--;
                        j++;
                    }
                    if(cnt==s1.length())return true;
            }

        //     for(int i :freq){
        //         System.out.print(i);
        //     }
        //   System.out.println();
            return false;
    }
}