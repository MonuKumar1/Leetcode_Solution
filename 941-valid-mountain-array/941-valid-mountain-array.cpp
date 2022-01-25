class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        int flag=0;
        if(n<=2)return false;
        int ind=-1;
        for(int i=1;i<n-1;i++)
        {
           if(arr[i-1]<arr[i] and arr[i]>arr[i+1])
           {
               ind=i;
               
           }
             
        }
        if(ind!=-1)
        for(int i=ind;i<n-1;i++)
            if(arr[i+1]>=arr[i])return false;
       if(ind!=-1) for(int i=1;i<=ind;i++)
            if(arr[i-1]>=arr[i])return false;
        
        
        // if(flag==1)
        if(ind!=-1)
        return true;
        return false;
    }
};