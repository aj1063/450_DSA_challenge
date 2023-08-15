class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int c = 0;
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++)  {
            c += mp[k-arr[i]];
            mp[arr[i]]++;
        }
        return c;
    }
};
