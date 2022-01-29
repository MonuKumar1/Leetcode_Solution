class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n,j1,j2;
	long long maxi=0;
	n=heights.size();
	int i;
	for(i=0;i<n;i++)
	{
		int c=1;
		j1=i-1;
		j2=i+1;
		while(j1>=0 && heights[j1]>=heights[i])
		{
			c++;
			j1--;
		}
		while(j2<n&&heights[j2]>=heights[i])
		{
			c++;
			j2++;
		}
		long long temp=heights[i]*c;
		maxi=max(maxi,temp);
        int var=heights[i];
        while(i<n&&heights[i]==var)
        {
            i++;
        }
        i--;
	}
    return maxi;
//          int n = heights.size();
//        vector<int> left(n),right(n);
        
//         stack<int> mystack;
//         for(int i=0;i<n;++i)               //Fill left
//         {
//             if(mystack.empty())
//             {    left[i] = 0;   mystack.push(i);    }
//             else
//             {
//                 while(!mystack.empty() and heights[mystack.top()]>=heights[i])
//                     mystack.pop();
                
//                 if(mystack.empty())left[i]=0;
//                 else left[i]=mystack.top()+1;
               
//                 mystack.push(i);
//             }
//         }
//         while(!mystack.empty()) //Clear stack
//             mystack.pop();
        
//         for(int i=n-1;i>=0;--i) //Fill right
//         {
//             if(mystack.empty())
//             {   right[i] = n-1; mystack.push(i);    }
            
//             else
//                 {
//                     while(!mystack.empty() and heights[mystack.top()]>=heights[i])
//                         mystack.pop();

//                     if(mystack.empty())right[i]=n-1;
//                     else right[i]=mystack.top()-1;

//                     mystack.push(i);
//                  }
//         }
//         int mx_area = 0;    //Stores max_area
//         for(int i=0;i<n;++i)
//             mx_area = max(mx_area,heights[i]*(right[i]-left[i]+1));
//         return mx_area;
    }
    
};