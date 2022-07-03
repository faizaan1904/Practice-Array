int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int i = 0, j = 0;
        
        int ans = INT_MAX;
        int sum = 0;
        
        while(j <= n){
            if(sum <= x) sum+=arr[j++];
            else {
                ans = min(ans, j - i);
                sum-=arr[i++];
            }
        }
        
        return ans;
    }
