class Solution {
public:
    int bitwiseComplement(int num) {
     
        // return ~n;
        if(num==0)return 1;
        int res = 0, ind = 0;
        while(num > 0){
            
            int digit = num % 2; 
            int temp = (digit == 1? 0 : 1); 
            res += (temp << ind);
            num /= 2;            
            ind++;
        }
        return res;
    
    }
};