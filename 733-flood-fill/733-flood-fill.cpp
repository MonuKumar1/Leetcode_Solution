class Solution {
public:
    // int a;
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int a)
    {
        if(sr>=image.size() || sc>=image[0].size() || sr<0 || sc<0)return;
        if(image[sr][sc]!=a)return;
        if(image[sr][sc]==a)
           image[sr][sc]= newColor;
        dfs(image,sr+1,sc,newColor,a);
        dfs(image,sr-1,sc,newColor,a);
        dfs(image,sr,sc+1,newColor,a);
        dfs(image,sr,sc-1,newColor,a);
        
    }
        
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
        int a=image[sr][sc];
    if(a!=newColor)    
    dfs(image,sr,sc,newColor,a);
        
        return image;
        
    }
};