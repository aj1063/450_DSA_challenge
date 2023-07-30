pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi = INT_MIN, mini = INT_MAX;
    for(int i = 0; i < n; i++)   {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    return make_pair(mini, maxi);
}
//method to define a pair()
// in pair , we can make_pair()
// pair<int, int> getMinMax={value1, value2}
//pair<int, int> getMinMax(value1, value2)
