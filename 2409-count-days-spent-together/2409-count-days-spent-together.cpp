class Solution {
public:
    int countDaysTogether(string aa, string la, string ab, string lb) {
        int month[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
        
        int x=month[(aa[0]-'0')*10+(aa[1]-'0')-1]+(aa[3]-'0')*10+(aa[4]-'0');
        
        int y=month[(la[0]-'0')*10+(la[1]-'0')-1]+(la[3]-'0')*10+(la[4]-'0');
        
        int a=month[(ab[0]-'0')*10+(ab[1]-'0')-1]+(ab[3]-'0')*10+(ab[4]-'0');
        
        int b=month[(lb[0]-'0')*10+(lb[1]-'0')-1]+(lb[3]-'0')*10+(lb[4]-'0');
        
        int k=min(y,b)-max(x,a)+1;
        
        return k<0?0:k;   
    }
};