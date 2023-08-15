class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int c = 0;
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++)  {
            c += mp[k-arr[i]];//if duplicate no present then counter will increase frequency time
            mp[arr[i]]++;//increase the frequency of arr[i]
        }
        return c;
    }
};
