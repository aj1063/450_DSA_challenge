vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>b;
        // int tmp=INT_MIN;
        // for(int i=0;i<n;i++)    {
        //     if(tmp<arr[i]){
        //         tmp=arr[i];
        //     }
        // }
        int frq[n]={0};
        for(int i=0;i<n;i++)    {
            frq[arr[i]]++;
        }
        
                for(int i=0;i<n;i++)    {
                    if(frq[i]>1){
                        b.push_back(i);
                    }
                }
        if(b.size()==0)
        {
            b.push_back(-1);
        }
                   
return b;
