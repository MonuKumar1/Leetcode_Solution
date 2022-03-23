class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
      int res = 0;
        
        while(target > startValue)
        {
			// if target is odd we will make it even
            if(target % 2)
                ++target;
			// if target is even divide by 2
            else
                target /= 2;
            
            ++res;
        }
        return res  + startValue - target;
    }
        
        
        
        // while(true)
        // {
        //     if((s-1)*2==t){
        //         ans+=2;
        //         cout<<"first "<<s<<endl;
        //         break;
        //     }
        //     else if(s<t)
        //     {
        //         ans++;
        //         s*=2;
        //         cout<<"second "<<s<<endl;
        //     }
        //     else{
        //         ans+=(s-t);
        //         cout<<"Third "<<s<<endl;
        //         break;
        //         s-=1;
        //     }
        // }
    //     return res;
    // }
};