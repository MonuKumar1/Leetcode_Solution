class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            
            if(m-1>=0 and m+1<n and arr[m]>arr[m-1] and arr[m]>arr[m+1])return m;
            
            else if(m+1<n and arr[m]<arr[m+1])l=m+1;
            else h=m-1;
        }
        return l;
    }
};