class Solution {
public:
    int findComplement(int num) {
        // cout<<~("101");
        int t=log2(num);
        // cout<<t<<endl;
        unsigned int a= ~0;
        int x=a<<t;
        num=num|x;
        
        return ~num;
    }
};