class Solution {
public:
//     string addBinary(string a, string b) {
        
//         int m=a.size();
//         int n=b.size();
//         string ans="";
//         int carry=0;
//         int i=m-1,j=n-1;
//         while(i>=0 and j>=0)
//         {    if(a[i]=='1' and b[j]=='1' and carry==0)          
//             {
//                 ans+="0"; carry=1;
//             cout<<"1"<<endl;
//             }
            
//             else if(a[i]=='1' and b[j]=='1' and carry==1)          
//             {
//                 ans+="1"; carry=1;
//               cout<<"2"<<endl;
//             }
//           else  if(((a[i]=='1' and b[j]=='0')|| (a[i]=='0' and b[j]=='1')) and carry==1)          
//             {
//                 ans+="0"; carry=1;
//               cout<<"3"<<endl;
//             }
            
//          else if(((a[i]=='1' and b[j]=='0')|| (a[j]=='0' and b[j]=='1')) and carry==0)          
//             {
//                 ans+="1"; carry=0;
//              cout<<"4"<<endl;
//             }
//          else if(a[i]=='0' and b[j]=='0' and carry==1)
//          {ans+="1";carry=0;cout<<"5"<<endl;}
//          else if(a[i]=='0' and b[j]=='0' and carry==0)
//          {ans+="0";carry=0;cout<<"6"<<endl;}
//             i--;j--;
            
//         }
//         while(i>=0)
//         {
//             if(a[i]=='1' and carry==1)
//             {
//                 carry=1;
//                 ans+="0";
//             }
//             else if(b[i]=='0' and carry==1)
//             {
//                 carry=0;
//                 ans+="1";
//             }
//               else if(b[i]=='1' and carry==0)
//             {
//                 carry=0;
//                 ans+="1";
//             }
//             else if(b[i]=='0' and carry==0)
//              {
//                  carry=0;ans+="0";
//              }i--;
//         }
//          while(j>=0)
//         {
//             if(b[j]=='1' and carry==1)
//             {
//                 carry=1;
//                 ans+="0";
//             }
//             else if(b[j]=='0' and carry==1)
//             {
//                 carry=0;
//                 ans+="1";
//             }
//               else if(b[j]=='1' and carry==0)
//             {
//                 carry=0;
//                 ans+="1";
//             }
//              else if(b[j]=='0' and carry==0)
//              {
//                  carry=0;ans+="0";
//              }
//              j--;
//         }
//         if(carry==1)ans+="1";
//         reverse(ans.begin(),ans.end());
//         return ans;
        
        
//     }
    string addBinary(string a, string b) {
        string res="";
        bool cbit=false;
        int len1=a.size(), len2=b.size();
        int l1=len1-1, l2=len2-1;
        while(l1>=0 && l2>=0){
            if(a[l1]!=b[l2]){
                res+=cbit?'0':'1';
            }
            else{
                res+=cbit?'1':'0';
                cbit=a[l1]=='0'?false:true;
            }
            l1--;
            l2--;
        }
        while(l1>=0){
            if(cbit){
                if(a[l1]=='1'){
                    res+='0';
                }else{
                    res+='1';
                    cbit=false;
                }
            }
            else{
                res+=a[l1];
            }
            l1--;
        }
        while(l2>=0){
            if(cbit){
                if(b[l2]=='1'){
                    res+='0';
                }else{
                    res+='1';
                    cbit=false;
                }
            }
            else{
                res+=b[l2];
            }
            l2--;
        }
        if(cbit)
            res+='1';
        for(int i=0;i<res.size()/2;i++){
            swap(res[i],res[res.size()-1-i]);
        }
        return res;
    }
};