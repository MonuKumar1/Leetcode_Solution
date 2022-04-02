class Solution {
public:
    
//     bool validPalindrome(string s) {
        
//         int n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             string s1=s.substr(0,i);
//             string s2=s.substr(i+1);
//             string s3=s1+s2;
//             string s4=s3;
//             reverse(s3.begin(),s3.end());
//             if(s3==s4)return true;
            
//         }
//         return false;
        
//     }
    
      bool validPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
            if (s[i] != s[j]) {
                int i1 = i, j1 = j - 1, i2 = i + 1, j2 = j;
                while (i1 < j1 && s[i1] == s[j1]) {i1++; j1--;};
                while (i2 < j2 && s[i2] == s[j2]) {i2++; j2--;};
                return i1 >= j1 || i2 >= j2;
            }
        return true;
    }  
    
    
        
        
//           int i,j,k,l,m,n;n=s.length();
//         i=0;j=n-1;
        
//         while(i<j)
//         {
//             if(s[i]!=s[j])
//             {
//                 int i1=i,j1=j-1,i2=i+1,j2=j;
//                 while(i1<j1)
//                 {
//                     if(s[i1]==s[j1])
//                     {
//                         i1++;j1--;
//                     }
//                     else break;
//                 }
//                 while(i2<j2)
//                 {
//                     if(s[i2]==s[j2])
//                     {
//                         i2++;j2--;
//                     }
//                     else break;
//                 }
//                 if(i1<j1 and i2<j2)return false;
//                 // else {
//                 //     i=i2;j=j2;
//                 // }
//             }
//             i++;j--;
//         }
//         return true;
        
//         // // unordered_map<char,int>m;
//         // // for(auto c:s)
        // // {
        // //     m[c]++;
        // // }
        // string rs=s;
        // reverse(rs.begin(),rs.end());
        // int count=0;
        // cout<<rs<<endl;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]!=rs[i])count++;
        //     // if(count>2)return false;
        // }
        // if(count<=2)
        // return true;
        // return false;
        
    // }
};