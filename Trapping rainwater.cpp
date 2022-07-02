 long long trappingWater(int arr[], int n){
        // code here
         long long water=0;
       vector<int>left(n),right(n);
       int maxi=INT_MIN;
       for(int i=0;i<n;i++){
           maxi=max(maxi,arr[i]);
           left[i]=maxi;
       }
       maxi=INT_MIN;
       for(int i=n-1;i>=0;i--){
           maxi=max(maxi,arr[i]);
           right[i]=maxi;
       }
       for(int i=0;i<n;i++){
           int mn=min(left[i],right[i]);
           water+=mn-arr[i];
       }
       return water;
    }
