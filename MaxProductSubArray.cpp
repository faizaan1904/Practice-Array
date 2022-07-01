long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long m=INT_MIN,cm=1;
        for(int i=0;i<n;i++){
            cm=1;
            for(int j=i;j<n;j++)
            
            {
                if(arr[i]!=0)
                   cm*=arr[j];
                if(cm>m)
                    m=cm;
            /*if(cm<0)
                cm=0;*/
            }
        }
        return m;
	}
