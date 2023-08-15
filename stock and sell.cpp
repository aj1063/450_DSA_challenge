//when single time we can buy and sell

int maxprofitq(int arr[], int n)  {
  int maxprofut = 0;
int minfar = arr[0];
for(int i=0; i<n; i++)  {
minfar = min(minfar, arr[i]);
int profit = arr[i] - minfar;
maxprofit = max(maxprofit, profit);
}

return maxfrofit;


//Whne multiple time buy and sell allow

int maxprofit1(int arr[], int n)  {
int maxprofit = 0;
for(int i=1;i<n; i++)  {
if(arr[i]>arr[i-1])  {
profit = profit+(arr[i]-arr[i-1]);
}
}
return profit;
}
