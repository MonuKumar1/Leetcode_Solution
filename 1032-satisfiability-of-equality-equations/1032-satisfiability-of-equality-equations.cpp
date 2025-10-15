class Solution {
     vector<int>parent;
     int getParent(int x){
        if(parent[x] !=x)return parent[x]=getParent(parent[x]);
        return parent[x];
    }
public:
   
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26);
        for(int i =0;i<26;i++){
            parent[i]=i;
        }
        for(auto str:equations){
            if(str[1]=='='){
                char x = getParent(str[0]-'a');
                char y = getParent(str[3]-'a');
                if(x!=y){
                    parent[x] = y;
                }
            }
        }
        for(auto str:equations){
            if(str[1]=='!'){
                char x = getParent(str[0]-'a');
                char y = getParent(str[3]-'a');
                if(x==y){
                    return false;
                }
            }
        }
        return true;
    }
};