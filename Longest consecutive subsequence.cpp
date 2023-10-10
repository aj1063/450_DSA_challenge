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




Longest consecutive subsequence
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      vector<int>v;
      v.push_back(arr[0]);
      for(int i=1;i<N;i++){
          if(v[i-1]!=arr[i])v.push_back(arr[i]);
      }
      int ans = 0;
      int c = 0;
      for(int i=0;i<v.size();i++){
          if(i>0 && v[i] == (v[i-1]+1))c++;
          else c=1;
          ans = max(ans,c);
      }
      return ans;
    }
};
