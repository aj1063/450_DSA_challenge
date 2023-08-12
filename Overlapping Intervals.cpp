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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// }
