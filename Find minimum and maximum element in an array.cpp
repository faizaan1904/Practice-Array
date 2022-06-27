pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long long> m;
    int min=a[0],max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    m.first=min;
    m.second=max;
    return m;
}
