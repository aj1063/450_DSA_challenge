//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         int n = intervals.size();
         sort(intervals[0].begin(), intervals[0].end());
         //sort(intervals.begin(), intervals.end(), sort_pair_first<int, int>());
         vector<vector<int>>ans;
         int i = 0;
     while(i < n) {
         int start = intervals[i][0];
         int end = intervals[i][1];
         i+=1;
         while(i < n and end >= intervals[i][0]) {
             
                 end=max(end, intervals[i][1]);
                 start = min(start, intervals[i][0]);
                 i+=1;
             
         }
         vector<int>tmp;
         tmp.push_back(start);
         tmp.push_back(end);
         ans.push_back(tmp);
     }
      return ans;   
    }
};
///////////////////////SECOND Approach

int n = intervals.size();
         sort(intervals.begin(), intervals.end());
    //      //sort(intervals.begin(), intervals.end(), sort_pair_first<int, int>());
         vector<vector<int>>ans;
         vector<int>v = intervals[0];
         int i = 1;
     while(i < n) {
         
         
         if(intervals[i][0] <= v[1])    {
             v[1] = max(v[1], intervals[i][1]);
         } else {
             ans.push_back(v);
             v = intervals[i];
         }
         i++;
     }
     ans.push_back(v);

return ans;
}
