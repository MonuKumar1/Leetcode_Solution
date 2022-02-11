class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
      vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        int s1len = s1.size();
        int s2len = s2.size();
        if(s1len>s2len)
            return false;
        
        int left=0,right=0;
        while(right<s1len)
        {
            s1hash[s1[right]-'a'] +=1;
            s2hash[s2[right]-'a'] +=1;
            right +=1;
        }
        right -=1;  // to point right to the end of the window
        while(right<s2len)
        {
            if(s1hash==s2hash)
                return true;
            right+=1;
            if(right!=s2len)
                s2hash[s2[right]-'a'] +=1;
            s2hash[s2[left]-'a'] -=1;
            left +=1;
        }
        return false;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
     
//         sort(s1.begin(),s1.end());sort(s2.begin(),s2.end());
//       if(s1.find(s2) != std::string::npos)
//           return true;
//         else false;
       
//         int n1=s1.size();
//         int n2=s2.size();
//         if(n1>n2)return false;
        
//         string str2=s2.substr(0,n1);
//         string str1=s1.substr(0,n1);
//         // cout<<s;
//         sort(str1.begin(),str1.end());
//         sort(str2.begin(),str2.end());
//         if(str1==str2)return true;
//         for(int i=1;i<n2-n1+1;i++)
//         {
//             if(str1==str2)return true;
//             else{
//                 str2=s2.substr(i,n1);
//                 sort(str2.begin(),str2.end());
//             }
//         }
//          if(str1==str2)return true;
        
//         return false;
        
    }
};