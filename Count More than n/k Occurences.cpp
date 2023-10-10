Count More than n/k Occurences
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int, int>freq;
        int x = (n / k);
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        int c = 0;
        for(auto i : freq){
            if(i.second > x)c++;
        }
        return c;
        
    }
};
