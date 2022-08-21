class Solution {
public:
    int minNumberOfHours(int ien, int iex, vector<int>& en, vector<int>& ex) {
        int sumen=0,sum2=0;
        
        for(auto x:en)sumen+=x;
        int t2=0;
        int f=0;
        for(auto x:ex)
        {
            if(x>=iex)
            {
                f=1;
                t2+=(x-iex+1);
            }
            if(f==1)
            {
                f=0;
                iex+=t2;
            }
            iex+=x;
        }
        
        int t1=sumen-ien+1;
        
        if(t1<0 and t2<0)            
          {
            // cout<<"1"<<endl; 
            return 0;}
        
        if(t1<0 and t2>0)
           {
            // cout<<"2"<<endl; 
            return t2;}
        
        if(t1>0 and t2<0)    
        {
            // cout<<"3"<<endl; 
            return  t1;}
        //t1>0 and t2>0
        else    
        {
            // cout<<"4"<<endl; 
            if(t1+t2>0)
         return t1+t2;
        return 0;
        }
    }
};