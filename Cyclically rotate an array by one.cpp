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


//third approach 
//we can do reverse first n-1 element then we can reverse entire array
// k is no of rotation
for (i = 0, j = n - k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // Reverse the entire array
    for (i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
