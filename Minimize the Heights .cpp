class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        
        int mx = arr[n-1];
        int mn = arr[0];
        int ans = mx - mn;
        for(int i = 1; i < n; i++)    {
            if(arr[i]-k<0)continue;
            mx = max(arr[i-1]+k, arr[n-1]-k);
            mn = min(arr[i]-k, arr[0]+k);
            ans = min(ans, mx-mn);
        }
        return ans;
    }
};
