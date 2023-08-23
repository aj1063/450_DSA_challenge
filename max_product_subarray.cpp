class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long max_over_all = arr[0];
	    long long max_end = arr[0];
	    long long min_end = arr[0];
	    for(int i = 1; i < arr.size(); i++)  {
	       int tmp = max_end;
	       max_end = max({arr[i], arr[i]*max_end, arr[i]*min_end});
	       min_end = min({arr[i], arr[i]*min_end, arr[i]*tmp});
	       max_over_all = max(max_end, max_over_all);
	   }
	   return max_over_all;
	}
};
