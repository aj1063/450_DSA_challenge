class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum = 0;
        long long maxi = arr[0];
        for(int i=0; i<n;i++){
            sum+=arr[i];
            maxi = max(maxi, sum);
            if(sum<0)sum=0;
        }
        return maxi;
    }
};

//Second method ----//meh=>max include current point,,,,msf=>max value without include current point
long long meh = 0;
        long long msf = INT_MIN;
        for(int i = 0; i < n; i++)    {
            meh = meh + arr[i];
            if(meh < arr[i])    {
                    meh = arr[i];
                    }
            if(msf < meh)   {
                    msf = meh;
                    }  
        }
        return msf;

//meh->max with include the current value
//msf->max without include the current value
