	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	   // multiset<int> s;
	    int arr[n+m];
	    int k=0;
	    for(int i=0;i<n;i++)
	        arr[k++]=arr1[i];
	    for(int i=0;i<m;i++)
	        arr[k++]=arr2[i];
	    sort(arr,arr+n+m);
	     k=0;
	    for(int i=0;i<n;i++)
	        arr1[i]=arr[k++];
	    for(int i=0;i<m;i++)
	        arr2[i]=arr[k++];
	   /*int i=0;
	    for(auto it=s.begin();it!=s.end();it++){
	        arr[i++]= *(it);
	    }*/
	}
