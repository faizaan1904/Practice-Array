int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int r=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            int s= min(arr[0]+k,arr[i]-k);
            int l=max(arr[n-1]-k,arr[i-1]+k);
            if(s>=0) r=min(r,l-s);
        }
        return r;
        /*int avg=0;
        accumulate(arr,arr+n,avg);
        avg/=n;
        for(int i=0;i<n;i++){
            if(avg<arr[i]+k){
                arr[i]-=k;
            }
            else if(arr[i]-k<avg){
                arr[i]+=k;
            }
        }
        return arr[n-1]-arr[0];*/
    }
