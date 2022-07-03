int PalinArray(int a[], int n)
    {
    	// code here
    	int sum=0;
        for(int i=0;i<n;i++){
            int num=a[i];
            while(num!=0){
                int d=num%10;
                sum*=10;
                sum+=d;
                num/=10;
            }
            if(sum!=a[i])
                return 0;
            sum=0;
        }
        return 1;
    }
