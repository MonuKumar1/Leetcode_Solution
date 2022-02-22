class Solution {
public:
    int titleToNumber(string columnTitle) {
        int s=columnTitle.size();
        // int p=pow(10,s-1);
        long long sum=0;
        long long x=1;
        for(int i=s-1;i>=0;i--)
        {char a1=columnTitle[i];
            sum+=((int)(a1)-'A'+1)*x;
            x*=26;
        }
        return sum;
    }
};