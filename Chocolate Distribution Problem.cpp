class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long mn = INT_MAX;
    sort(a.begin(), a.end()); //sort the given array
    for(int i = 0; i + m - 1 < n; i++){  ///check minimum value and store in the given value
        mn = min(a[i+m-1]-a[i], mn);
    }
    return mn;
    }   
};
