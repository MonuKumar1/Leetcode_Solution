class Solution {
public:
    int smallestRepunitDivByK(int k) {

       if(k%2==0 || k%5==0)return -1;
       int cnt=1;
       long long num=1;
       while(num%k) {
        cnt++;
        num =  (num*10 +1)%k;
       }
       return cnt;
    }
};