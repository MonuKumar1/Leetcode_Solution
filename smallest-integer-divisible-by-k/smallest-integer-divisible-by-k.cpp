class Solution {
public:
    int smallestRepunitDivByK(int k) {
        
//         if(k%2==0)return -1;
//         else if()
        
        int ans=1;
        int num=0;
        while(ans<=100000)
        {
            num=num*10+1;
            if(num>=k)num=num%k;
            if(num==0)return ans;
            ans++;
        }
        return -1;
        
    }
};