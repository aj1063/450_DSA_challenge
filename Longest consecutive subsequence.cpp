class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int>v;
      for(int i=0;i<N;i++)  {
          v.insert(arr[i]);
      }
      int ans = INT_MIN;
      for(int i=0;i<N;i++)  {
          if(v.find(arr[i]-1) == v.end())  {
              int j = arr[i]+1;
              while(v.find(j) != v.end())   
                  j++;
              ans = max(ans, j-arr[i]);         
              
          }
      }
           
     return ans; 
     
    }
