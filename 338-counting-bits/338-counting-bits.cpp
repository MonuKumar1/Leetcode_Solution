class Solution {
public:

    int decToBinary(int n)
{
    int i = 0,ans=0;
    while (n > 0) {
         if(n%2==1)
            ans++;
        n = n / 2;
        i++;
    }
        return ans;}
    vector<int> countBits(int num) {
        vector<int>b;
        for(int i=0;i<=num;i++)
            b.push_back(decToBinary(i));
        return b;
    }
};