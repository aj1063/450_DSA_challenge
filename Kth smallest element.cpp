//kth smallest element in an array

int maxi = *max_element(arr, arr+r+1);//max element of the array
        int freq[maxi+1] = {0};//frequency array of size max
        for(int i=0; i<=r; i++){
            freq[arr[i]]++;
        }
        int count = 0;
        for(int i = 0; i <= maxi;  i++){
            if(freq[i]!=0){
                count++;
                if(count >= k){
                    return i;
                }
            }
        }
        return -1;


//Kth largest element in an array
class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        
        int maxi = *max_element(arr.begin(), arr.end());
        cout<<maxi;
        vector<int> freq(maxi+1); // [0,0,0,0,0,0,0]
        // // cout<<maxi;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        // // [ 0, 1, 1, 1, 1, 1, 1 ]
         int count = 0;
         for(int i = maxi; i >= 0;  i--){
             if(freq[i]!=0){
                 count+=freq[i];
                 if(count >= k){
                     return i;
                 }
             }
         }
        return -1; 
    }
};
