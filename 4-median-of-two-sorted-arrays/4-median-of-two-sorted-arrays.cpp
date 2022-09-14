class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		int n = nums1.size();
		int m = nums2.size();

		if (n > m)
			return findMedianSortedArrays(nums2, nums1);

		int k = (n+m-1)/2;

		int l = 0;
		int r = min(k, n);

		while (l < r) {
			int mid1 = l + (r-l)/2;
			int mid2 = k-mid1;

			if (nums1[mid1] > nums2[mid2])
				r = mid1;
			else
				l = mid1+1;
		}

		/* if (n+m) is odd, the median is the larger one between nums1[l-1] and nums2[k-l] */
		int a = max(l >= 1 ? nums1[l-1] : INT_MIN, k >= l ? nums2[k-l] : INT_MIN);
		if ((n+m) % 2 != 0)
			return a;

		/* in case (n+m) is even, take the average of mid 2 elements */
		int b =  min(l < n ? nums1[l] : INT_MAX, k-l+1 < m ? nums2[k-l+1] : INT_MAX);

		return (a+b)/2.0;
	}
};