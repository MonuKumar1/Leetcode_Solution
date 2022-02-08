class Solution {
public:
    int count;
    int addDigits(int num) {
     
        while(num%10!=num)
        {
            count++;
            int sum=0;
        
         num=  helper(num,sum);
        }
        return num;
        
    }
    
    int helper(int num,int sum)
    {
       if(num%10==num)
           return num+sum;
        return helper(num/10,sum)+num%10;
        
           
    }
    
};