class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int n = arr.size();
        // if(n==1)    {
        //     return;
        // }
        int i=1;
        int lastInc = -1;
        while(i < n)    {
            if(arr[i] > arr[i-1])   {
                lastInc = i;
            }
            i++;
        }
        
        if(lastInc==-1)  {
            for(int i = 0; i<n/2; i++){
                swap(arr[i], arr[n-i-1]);
            }
        return arr;    
        }
        
        int a = arr[lastInc]; 
        int index = lastInc;
    for(i = lastInc; i<n;i++)   {
        if(arr[i] > arr[lastInc-1] and arr[lastInc] > arr[i])   {
            index = i;
        }
    }
        
        swap(arr[lastInc-1], arr[index]);
        sort(arr.begin()+lastInc, arr.end());
    
    return arr;
    }
};
