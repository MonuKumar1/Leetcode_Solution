class Solution {
public:
    int myAtoi(string str) {
//         int n=s.size();
//         int flag=0;
//         int i=0;
//         if((s[i]!=' ' and s[i]!='-' ) and (s[i]<'0' ||s[i]>'9')) return 0;
//         while(s[i]==' ')
//             i++;
//         if(s[i]=='-')
//         {flag=1;i++;}
//         // if((s[i]!=' ' || s[i]!='-' ) and (s[i]<='0' ||s[i]>='9')) return 0;
//         long long res=0;
//         long long p=1;
//         // long long p=pow(10,n-i-1);
//         for(int j=n-1;j>=i;j--)
//         {
//             if(res>INT_MAX)
//             {
//                 if(flag==0)
//                     return INT_MAX;
//                 else return INT_MIN;
//             }
            
//             else if(s[j]>='0' and s[j]<='9')
//             {    res+=(s[j]-'0')*1LL*p;
//             p*=10;
//             }
//             else if(s[j]=='.')
//             {res=0;p=1;}
//             else continue;
//         }
//            if(res>INT_MAX)
//             {
//                 if(flag==0)
//                     return INT_MAX;
//                 else return INT_MIN;
//             }
//         else if(flag==0)
//         return res;
//         else return -1*res;
         if( str.empty())
            return 0;
        int len = str.length(), i=0, sign = 1;
        
        while( i<len && str[i] == ' ')
            i++;
        
        if(i==len)
            return 0;
        
        if(str[i] == '-'){
            sign = 0;
            i++;
        }
        else if(str[i] == '+')
            i++;
        
        long int out = 0;
        
        while(str[i] >= '0' && str[i] <= '9'){
            out = out * 10;
            if(out <= INT_MIN || out >= INT_MAX)
                break;
            out = out + (str[i] - '0');
            i++;
        }
        
        if(sign == 0)
            out = -1 * out;
        if(out <= INT_MIN)
            return INT_MIN;
        if(out >= INT_MAX)
            return INT_MAX;
        return (int)out;
    }
};