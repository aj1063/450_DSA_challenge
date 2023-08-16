   //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
        int first = 0;
        int j=n-1;
        int maxi = arr[n-1]+1;
        for(int i = 0;i < n; i++)    {
            if(i%2==0)  {
                arr[i] = arr[i]+(arr[j]%maxi)*maxi;
                j--;
            }
            else  {
                arr[i] += (arr[first]%maxi)*maxi;
                first++;
            }
        }
        for(int i=0;i<n;i++)    {
            arr[i] /= maxi;
         }
    }
}
