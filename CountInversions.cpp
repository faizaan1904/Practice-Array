long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long c=0,t=0;
    for(long long i=0;i<N;i++){
        for(long long j=0;j<N-1;j++){
            if(arr[j]>arr[j+1]){
                long long temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                c++;
                t=0;
                
            }
            else{
                t++;
            }
        }
        if(t==N-1)
            break;
    }
    return c;
}
