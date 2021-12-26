class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& sp, string s) {
        
        int l=s.length();
        int i=0;
        vector<int>v;
        int r=sp[0],c=sp[1];
        
        while(i<l)
        {
            // int j=i;
            int r1=r,c1=c;
            int count=0;
            for(int j=i;j<l;j++)
            {
                // if(sp[0]+i<0 || sp[1]+j<0 || sp[0]+i>=n || sp[0]+j>=n)continue;
                // else
                // { count++;
                    if(s[j]=='L')
                    {
                        // count++;
                        c1--;
                    }
                    if(s[j]=='R' )
                    {
                        // sp[1]+=1;count++;
                       c1++;
                    }
                     if(s[j]=='U' )
                    {
                        // count++;
                        r1--;
                    }
                    if(s[j]== 'D' )
                    {
                        // count++;
                       r1++;
                    }
                if( r1<0 || r1>=n || c1>=n || c1<0)
                    break;
                    count++;
                // else break;
                    
                // }
                
            }
            v.push_back(count);
            i++;
        }
    return v;
    }
};