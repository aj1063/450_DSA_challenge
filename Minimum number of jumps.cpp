class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jmp[n];
        jmp[0]=0;
        if(arr[0]==0)   {
            return -1;
        }    
           for(int i=1;i<n;i++){
                for(int j=0;j<i;j++){
                    if(i<=(j+arr[j])){    //indeX  should be under j + jump[j] then we can reach at index i;
                        jmp[i]=min(jmp[i], jmp[j]+1);
                    }
                }
            }
            
         return jmp[n-1];
    }
};
//arr[];
//jump[];
jump[0]=0;
at i index 
