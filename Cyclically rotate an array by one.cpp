Cyclically rotate an array by one

//User function Template for C++

void rotate(int arr[], int n)
{
    int tmp = arr[n-1];
    for(int i = n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = tmp;
}

//second approach 
void rotate(int arr[], int n)
{

    int i=0, j = n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
    }
}
