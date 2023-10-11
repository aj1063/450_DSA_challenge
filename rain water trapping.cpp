class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int leftmax[n];
        int rightmax[n];
        int water[n];
        leftmax[0] = arr[0];
        rightmax[n-1] = arr[n-1];
        for(int i= 1; i < n; i++){
            leftmax[i] = max(leftmax[i-1], arr[i]);
        }
        
        for(int i= n-2; i >= 0; i--){
            rightmax[i] = max(rightmax[i+1], arr[i]);
        }
        for(int i=0;i<n;i++){
            water[i]=min(rightmax[i],leftmax[i])-arr[i];
        }
        long long sum = 0;
        for(int i =0; i<n; i++){
            sum+=water[i];
        }
        return sum;
    }
};
